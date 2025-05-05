module;
#include <WS2tcpip.h>

module TCPSocket;

import SocketUtil;

TCP::TCPSocket::~TCPSocket()
{
	closesocket(mSocket);
}

int TCP::TCPSocket::Connect(const Socketaddr::SocketAddress& inAddress)
{
	int err = connect(mSocket, &inAddress.mSockAddr, inAddress.GetSize());
	if (err >= 0)
		return NO_ERROR;

	SocketUtils::SocketUtil::ReportError(L"TCPSocket::Connet");
	return SocketUtils::SocketUtil::GetLastError();
}

int TCP::TCPSocket::Bind(const Socketaddr::SocketAddress& inToAddress)
{
	int err = bind(mSocket, &inToAddress.mSockAddr, inToAddress.GetSize());

	if (err == 0)
		return NO_ERROR;

	SocketUtils::SocketUtil::ReportError(L"TCPSocket::Bind");
	return SocketUtils::SocketUtil::GetLastError();
}

int TCP::TCPSocket::Listen(int inBackLog)
{
	int err = listen(mSocket, inBackLog);
	if (err >= 0)
		return NO_ERROR;

	SocketUtils::SocketUtil::ReportError(L"TCPSocket::Listen");
	return SocketUtils::SocketUtil::GetLastError();
}

TCP::TCPSocketPtr TCP::TCPSocket::Accept(Socketaddr::SocketAddress& inFromAddress)
{
	int length = inFromAddress.GetSize();
	SOCKET newSocket = accept(mSocket, &inFromAddress.mSockAddr, &length);

	if (newSocket != INVALID_SOCKET)
		return TCPSocketPtr(new TCPSocket(newSocket));

	SocketUtils::SocketUtil::ReportError(L"TCPSocket::Accept");
	return nullptr;
}

int TCP::TCPSocket::Send(const void* inData, int inLen)
{
	int bytesSentCount = send(mSocket, static_cast<const char*>(inData), inLen, 0);

	if (bytesSentCount >= 0)
		return bytesSentCount;

	SocketUtils::SocketUtil::ReportError(L"TCPSocket::Send");
	return SocketUtils::SocketUtil::GetLastError();
}

int TCP::TCPSocket::Receive(void* inBuffer, int inLen)
{
	int bytesReceivedCount = recv(mSocket, static_cast<char*>(inBuffer), inLen, 0);

	if (bytesReceivedCount >= 0)
		return bytesReceivedCount;

	SocketUtils::SocketUtil::ReportError(L"TCPSocket::Receive");
	return SocketUtils::SocketUtil::GetLastError();
}
