#include <memory>
#include <string>
#include <WS2tcpip.h>
#include <cstdint>
#include <ws2def.h>
#include <WinSock2.h>
using namespace std;

class SocketAddress;
class UDPSocket;
class TCPSocket;

using UDPSocketPtr =		std::shared_ptr<UDPSocket>;
using TCPSocketPtr =		std::shared_ptr<TCPSocket>;
using SocketAddressPtr =	std::shared_ptr<SocketAddress>;