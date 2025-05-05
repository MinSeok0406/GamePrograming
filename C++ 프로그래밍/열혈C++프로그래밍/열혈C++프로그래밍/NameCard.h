#pragma once
#include <iostream>
#include <string>
using namespace std;

enum COMP_POS
{
	CLERK = 0,
	SENIOR,
	ASSIST,
	MANAGER
};

class NameCard
{
public:
	NameCard(string name, string company, string phone, COMP_POS com = COMP_POS::CLERK);
	NameCard(const NameCard& nc);
	~NameCard();

public:
	void ShowNameCardInfo() const;


protected:
	string _name;
	string _company;
	string _phone;
	string _com;
};