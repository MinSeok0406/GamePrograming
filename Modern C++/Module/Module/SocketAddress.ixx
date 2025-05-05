module;

export module SocketAddress;

import PtrUtils;

export namespace Socketaddr
{
	class SocketAddress
	{
	public:
		SocketAddress(uint32_t inAddress, uint16_t inPort);
		SocketAddress(const sockaddr& inSockAddr);

		size_t GetSize() const { return sizeof(sockaddr); }

	public:	// �̰� private�� �ٲٰ� ������ ������� �ϸ� �ٲٱ� ����...
		sockaddr mSockAddr;

		sockaddr_in* GetAsSockAddrIn() { return reinterpret_cast<sockaddr_in*>(&mSockAddr); }
	};

	using SocketAddressPtr = shared_ptr<SocketAddress>;
}
