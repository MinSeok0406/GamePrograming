module;

#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>

module SocketUtil;

UDP::UDPSocketPtr SocketUtils::SocketUtil::CreateUDPSocket(SocketUtils::SocketAddressFamily inFamily)
{
	SOCKET s = socket(inFamily, SOCK_DGRAM, IPPROTO_UDP);
	if (s != INVALID_SOCKET)
	{
		return UDP::UDPSocketPtr(new UDP::UDPSocket(s));
	}

	ReportError(L"SocketUtil::CreateUDPSocket");
	return nullptr;
}