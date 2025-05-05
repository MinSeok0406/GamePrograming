export module Person.Arm;

export import <string>;
export using namespace std;

export namespace Human
{
	class Arm
	{
	public:
		Arm(string name);
		~Arm();

	private:
		string _name;
	};
}
