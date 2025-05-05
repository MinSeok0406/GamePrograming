#include "SocketUtil.h"

#include "UDPSocket.h"

UDPSocketPtr SocketUtil::CreateUDPSocket(SocketAddressFamily inFamily)
{
	SOCKET s = socket(inFamily, SOCK_DGRAM, IPPROTO_UDP);
	if (s != INVALID_SOCKET)
	{
		return UDPSocketPtr(new UDPSocket(s));
	}

	ReportError(L"SocketUtil::CreateUDPSocket");
	return nullptr;
}
