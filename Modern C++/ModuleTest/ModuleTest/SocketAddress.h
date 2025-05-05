#include "PtrUtils.h"

class SocketAddress
{
public:
	SocketAddress() { }
	SocketAddress(uint32_t inAddress, uint16_t inPort);
	SocketAddress(const sockaddr& inSockAddr);

	//const sockaddr GetSockAddr() const { return mSockAddr; }
	//sockaddr GetSockaddr() { return mSockAddr; }
	size_t GetSize() const { return sizeof(sockaddr); }

public:
	sockaddr mSockAddr;

	sockaddr_in* GetAsSockAddrIn() { return reinterpret_cast<sockaddr_in*>(&mSockAddr); }
};