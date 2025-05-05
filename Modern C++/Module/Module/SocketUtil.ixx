module;
#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>

export module SocketUtil;

import PtrUtils;
import UDPSocket;

export namespace SocketUtils
{
	enum SocketAddressFamily
	{
		INET = AF_INET,
		INET6 = AF_INET6,
	};

	class SocketUtil
	{
	public:
		SocketUtil() {}
		~SocketUtil() {}

		UDP::UDPSocketPtr CreateUDPSocket(SocketAddressFamily inFamily);

	public:
		static const wchar_t* ReportError(const wchar_t* w_str) { return w_str; }
		static int GetLastError() { return SOCKET_ERROR; }
	};
}
