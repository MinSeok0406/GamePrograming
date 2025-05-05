#include "NameCard.h"

NameCard::NameCard(string name, string company, string phone, COMP_POS com)
{
	_name = name;
	_company = company;
	_phone = phone;

	switch (com)
	{
	case CLERK:
		_com = "사원";
		break;
	case SENIOR:
		_com = "주임";
		break;
	case ASSIST:
		_com = "대리";
		break;
	case MANAGER:
		_com = "과장";
		break;
	}
}

NameCard::NameCard(const NameCard& nc) 
	: _name(nc._name), _company(nc._company), _phone(nc._phone), _com(nc._com)
{

}

NameCard::~NameCard()
{

}

void NameCard::ShowNameCardInfo() const
{
	cout << "이름: " << _name << endl;
	cout << "회사: " << _company << endl;
	cout << "전화번호: " << _phone << endl;
	cout << "직급: " << _com << endl;
	cout << endl;
}
