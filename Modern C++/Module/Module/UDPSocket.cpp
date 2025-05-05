module;
#include <WS2tcpip.h>

module UDPSocket;

import SocketUtil;

UDP::UDPSocket::~UDPSocket()
{
	closesocket(mSocket);
}

int UDP::UDPSocket::Bind(const Socketaddr::SocketAddress& inBindAddress)
{
	int err = bind(mSocket, &inBindAddress.mSockAddr, inBindAddress.GetSize());

	if (err == 0)
		return NO_ERROR;

	SocketUtils::SocketUtil::ReportError(L"UDPSocket::Bind");
	return SocketUtils::SocketUtil::GetLastError();
}

int UDP::UDPSocket::SendTo(const void* inData, int inLen, const Socketaddr::SocketAddress& inTo)
{
	int byteSentCount = sendto(mSocket, static_cast<const char*>(inData), inLen, 0, &inTo.mSockAddr, inTo.GetSize());
	if (byteSentCount >= 0)
		return byteSentCount;

	SocketUtils::SocketUtil::ReportError(L"UDPSocket::SendTo");
	return SocketUtils::SocketUtil::GetLastError();
}

int UDP::UDPSocket::ReceiveFrom(void* inBuffer, int inLen, Socketaddr::SocketAddress& outFrom)
{
	int fromLength = outFrom.GetSize();
	int readByteCount = recvfrom(mSocket, static_cast<char*>(inBuffer), inLen, 0, &outFrom.mSockAddr, &fromLength);

	if (readByteCount >= 0)
		return readByteCount;

	SocketUtils::SocketUtil::ReportError(L"UDPSocket::ReceiveFrom");
	return SocketUtils::SocketUtil::GetLastError();
}
