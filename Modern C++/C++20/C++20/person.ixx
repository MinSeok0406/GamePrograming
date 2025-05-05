module;
//#include <iostream>
//#include <vector>
//#include <string>

export module person;	// 명명 모듈 선언문

export import Person.Arm;
import Leg;
export import <iostream>;
//import <string>;
//export using namespace std;

export namespace Human
{
	class Person : public Leg
	{
	public:
		Person(string firstName, string lastName);
		~Person();
		const string& getFirstName() const;
		const string& getlastName() const;

	private:
		string m_firstName;
		string m_lastName;
	};
}