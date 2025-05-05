#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
	BankAccount(int account, string name, int money);
	~BankAccount();

	void InputMoney();
	void OutputMoney();
	void PrintAccount();

private:
	int			_account;
	string		_name;
	int			_money;
};