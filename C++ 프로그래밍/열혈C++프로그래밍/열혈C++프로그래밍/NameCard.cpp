#include "NameCard.h"

NameCard::NameCard(string name, string company, string phone, COMP_POS com)
{
	_name = name;
	_company = company;
	_phone = phone;

	switch (com)
	{
	case CLERK:
		_com = "���";
		break;
	case SENIOR:
		_com = "����";
		break;
	case ASSIST:
		_com = "�븮";
		break;
	case MANAGER:
		_com = "����";
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
	cout << "�̸�: " << _name << endl;
	cout << "ȸ��: " << _company << endl;
	cout << "��ȭ��ȣ: " << _phone << endl;
	cout << "����: " << _com << endl;
	cout << endl;
}
