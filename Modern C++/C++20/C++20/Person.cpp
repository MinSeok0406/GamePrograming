module person;

Human::Person::Person(string firstName, string lastName)
	: m_firstName{ move(firstName)}, m_lastName{ move(lastName)}
{
	cout << "Person 생성자 호출" << endl;
}

Human::Person::~Person()
{
	cout << "Person 소멸자 호출" << endl;
}

Human::Arm::Arm(string name)
	: _name(move(name))
{
	cout << "Arm 생성자 호출" << endl;
}

Human::Arm::~Arm()
{
	cout << "Arm 소멸자 호출" << endl;
}

Human::Leg::Leg()
{
	cout << "Leg 생성자 호출" << endl;
}

Human::Leg::~Leg()
{
	cout << "Leg 소멸자 호출" << endl;
}


const string& Human::Person::getFirstName() const
{
	return m_firstName;
}

const string& Human::Person::getlastName() const
{
	return m_lastName;
}
