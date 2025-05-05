//#include <iostream>
//#include <map>
//using namespace std;
//
//class Account
//{
//public:
//	Account()
//	{
//
//	}
//
//	Account(int account, string name, int money) : _account(account), _name(name), _money(money)
//	{
//
//	}
//
//	Account(const Account& acc) : _account(acc._account), _name(acc._name), _money(acc._money)
//	{
//
//	}
//
//	~Account()
//	{
//		
//	}
//
//public:
//	void InputMoney(int account);
//	void OutputMoney(int account);
//	void PrintAccount() const;
//
//private:
//	int _account{ -1 };
//	string _name;
//	int _money{ -1 };
//};
//
//int main(void)
//{
//	int n = 0, count = -1;
//	Account* acc[501];
//
//	while (true)
//	{
//		cout << "-----Menu-----" << endl;
//		cout << "1. ���°���" << endl;
//		cout << "2. �Ա�" << endl;
//		cout << "3. ���" << endl;
//		cout << "4. �������� ��ü ���" << endl;
//		cout << "5. ���α׷� ����" << endl;
//		cout << "����: ";
//		cin >> n;
//		cout << endl;
//
//		if (n < 1 || n > 5)
//			return 0;
//
//		if (n == 1)
//		{
//			int account = 0;
//			string name;
//			int money = 0;
//			count++;
//
//			cout << "[���°���]" << endl;
//			cout << "����ID: ";
//			cin >> account;
//			cout << "�̸�: ";
//			cin >> name;
//			cout << "�Աݾ�: ";
//			cin >> money;
//			cout << endl;
//			
//			acc[count] = new Account(account, name, money);
//		}
//		else if (n == 2)
//		{
//			if (count < 0)
//				continue;
//
//			int account = 0;
//
//			cout << "[��\t��]" << endl;
//			cout << "����ID: ";
//			cin >> account;
//
//			for (int i = 0; i <= count; i++)
//			{
//				acc[i]->InputMoney(account);
//			}
//		}
//		else if (n == 3)
//		{
//			int account = 0;
//
//			cout << "[��\t��]" << endl;
//			cout << "����ID: ";
//			cin >> account;
//
//			for (int i = 0; i <= count; i++)
//			{
//				acc[i]->OutputMoney(account);
//			}
//		}
//		else if (n == 4)
//		{
//			for (int i = 0; i <= count; i++)
//			{
//				acc[i]->PrintAccount();
//			}
//		}
//		else if (n == 5)
//		{
//			cout << "���α׷��� �����մϴ�." << endl;
//			return 0;
//		}
//	}
//}
//
//void Account::InputMoney(int account)
//{
//	if (account == this->_account)
//	{
//		int money = 0;
//
//		cout << "�Աݾ�: ";
//		cin >> money;
//		this->_money += money;
//		cout << "�ԱݿϷ�" << endl;
//		cout << endl;
//	}
//}
//
//void Account::OutputMoney(int account)
//{
//	if (account == this->_account && this->_money > 0)
//	{
//		int money = 0;
//
//		cout << "��ݾ�: ";
//		cin >> money;
//
//		if (this->_money - money >= 0)
//		{
//			this->_money -= money;
//			cout << "��ݿϷ�" << endl;
//			cout << endl;
//		}
//		else
//		{
//			cout << "�ݾ��� �ʰ��߽��ϴ�." << endl;
//			return;
//		}
//	}
//}
//
//void Account::PrintAccount() const
//{
//	cout << "����ID: " << this->_account << endl;
//	cout << "�� ��: " << this->_name << endl;
//	cout << "�� ��: " << this->_money << endl;
//	cout << endl;
//}
