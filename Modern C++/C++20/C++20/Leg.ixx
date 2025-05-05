export module Leg;

import :R_Foot;
import :L_Foot;
import <vector>;
using namespace std;

export namespace Human
{
	class Leg
	{
	public:
		Leg();
		~Leg();

	private:
		vector<vector<int>> _size;
	};
}