export module UDPSocket;

import PtrUtils;
import SocketAddress;

export namespace UDP
{
	class UDPSocket
	{
	public:
		UDPSocket(SOCKET inSocket) : mSocket(inSocket) {}
		~UDPSocket();
		int Bind(const Socketaddr::SocketAddress& inBindAddress);
		int SendTo(const void* inData, int inLen, const Socketaddr::SocketAddress& inTo);
		int ReceiveFrom(void* inBuffer, int inLen, Socketaddr::SocketAddress& outFrom);

	private:
		SOCKET mSocket;
	};

	using UDPSocketPtr = std::shared_ptr<UDPSocket>;
}
