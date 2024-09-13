#pragma once
#include "IocpCore.h"
#include "IocpEvent.h"
#include "NetAddress.h"
#include "RecvBuffer.h"

class Service;

//--------------
//	 Session
//--------------

class Session : public IocpObject
{
	friend class Listener;
	friend class IocpCore;
	friend class Service;

	enum 
	{
		BUFFER_SIZE = 0x10000,	// 64KB
	};

public:
	Session();
	virtual ~Session();

public:
						/* 외부에서 사용 */
	void				Send(SendBufferRef sendBuffer);		// 데이터 송신 요청을 처리하는 메소드
	bool				Connect();
	void				Disconnect(const WCHAR* cause);		// 소켓 연결을 해제하는 메소드

	shared_ptr<Service> GetService() { return _service.lock(); }
	void				SetService(shared_ptr<Service> service) { _service = service; }

public:
						/* 정보 관련 */
	void				SetNetAddress(NetAddress address) { _netAddress = address; }
	NetAddress			GetAddress() { return _netAddress; }
	SOCKET				GetSocket() { return _socket; }
	bool				IsConnected() { return _connected; }
	SessionRef			GetSessionRef() { return static_pointer_cast<Session>(shared_from_this()); }

private:
						/* 인터페이스 구현 */
	virtual HANDLE		GetHandle() override;
	virtual void		Dispatch(class IocpEvent* iocpEvent, int32 numOfBytes = 0) override;

private:
						/* 전송 관련 */
	bool				RegisterConnect();
	bool				RegisterDisconnect();
	void				RegisterRecv();			// 수신 대기를 등록하는 메소드
	void				RegisterSend();			// 송신 데이터가 있을 경우 소켓에 비동기로 송신을 등록하는 메소드

	void				ProcessConnect();
	void				ProcessDisconnect();
	void				ProcessRecv(int32 numOfBytes);
	void				ProcessSend(int32 numOfBytes);

	void				HandleError(int32 errorCode);

protected:
						/* 컨텐츠 코드에서 재정의 */
	virtual void		OnConnected() { }									// 연결되었을 때 호출되는 메소드
	virtual int32		OnRecv(BYTE* buffer, int32 len) { return len; }		// 데이터 수신 시 호출되는 메소드
	virtual void		OnSend(int32 len) { }								// 데이터 송신 완료 시 호출되는 메소드
	virtual void		OnDisconnected() { }								// 연결 해제 시 호출되는 메소드

private:
	weak_ptr<Service>	_service;
	SOCKET				_socket = INVALID_SOCKET;	// 네트워크 통신에 사용되는 소켓
	NetAddress			_netAddress = {};
	Atomic<bool>		_connected = false;

private:
	USE_LOCK;

							/* 수신 관련 */
	RecvBuffer				_recvBuffer;

							/* 송신 관련 */
	Queue<SendBufferRef>	_sendQueue;
	Atomic<bool>			_sendRegistered = false;

private:
						/* IocpEvent 재사용 */
	ConnectEvent		_connectEvent;
	DisconnectEvent		_disconnectEvent;
	RecvEvent			_recvEvent;
	SendEvent			_sendEvent;
};

