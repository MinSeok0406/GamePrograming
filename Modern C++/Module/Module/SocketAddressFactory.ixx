export module SocketAddressFactory;

import PtrUtils;
import SocketAddress;

export namespace SocketAddrFac
{
	class SocketAddressFactory
	{
		static Socketaddr::SocketAddressPtr CreateIPv4FromString(const string& inString);
	};
}
