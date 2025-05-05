export module TCPSocket;

import PtrUtils;
import SocketAddress;

export namespace TCP
{
	class TCPSocket;
	using TCPSocketPtr = shared_ptr<TCPSocket>;

	class TCPSocket
	{
	public:
		TCPSocket(SOCKET inSocket) : mSocket(inSocket) {}
		~TCPSocket();
		int				Connect(const Socketaddr::SocketAddress& inAddress);
		int				Bind(const Socketaddr::SocketAddress& inToAddress);
		int				Listen(int inBackLog = 32);
		TCPSocketPtr	Accept(Socketaddr::SocketAddress& inFromAddress);
		int				Send(const void* inData, int inLen);
		int				Receive(void* inBuffer, int inLen);

	private:
		SOCKET mSocket;
	};
}
