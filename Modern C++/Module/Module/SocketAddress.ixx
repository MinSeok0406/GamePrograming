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

	public:	// 이거 private로 바꾸고 싶은데 예제대로 하면 바꾸기 힘듦...
		sockaddr mSockAddr;

		sockaddr_in* GetAsSockAddrIn() { return reinterpret_cast<sockaddr_in*>(&mSockAddr); }
	};

	using SocketAddressPtr = shared_ptr<SocketAddress>;
}
