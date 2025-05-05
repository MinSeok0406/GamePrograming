module person;

Human::Person::Person(string firstName, string lastName)
	: m_firstName{ move(firstName)}, m_lastName{ move(lastName)}
{
	cout << "Person ������ ȣ��" << endl;
}

Human::Person::~Person()
{
	cout << "Person �Ҹ��� ȣ��" << endl;
}

Human::Arm::Arm(string name)
	: _name(move(name))
{
	cout << "Arm ������ ȣ��" << endl;
}

Human::Arm::~Arm()
{
	cout << "Arm �Ҹ��� ȣ��" << endl;
}

Human::Leg::Leg()
{
	cout << "Leg ������ ȣ��" << endl;
}

Human::Leg::~Leg()
{
	cout << "Leg �Ҹ��� ȣ��" << endl;
}


const string& Human::Person::getFirstName() const
{
	return m_firstName;
}

const string& Human::Person::getlastName() const
{
	return m_lastName;
}
