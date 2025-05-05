#include "PtrUtils.h"

enum SocketAddressFamily
{
	INET = AF_INET,
	INET6 = AF_INET6,
};

class SocketUtil
{
public:
	SocketUtil() { }
	~SocketUtil() { }

	static UDPSocketPtr CreateUDPSocket(SocketAddressFamily inFamily);

public:
	static const wchar_t* ReportError(const wchar_t* w_str) { return w_str; }
	static int GetLastError() { return SOCKET_ERROR; }
};