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
//		cout << "1. 계좌개설" << endl;
//		cout << "2. 입금" << endl;
//		cout << "3. 출금" << endl;
//		cout << "4. 계좌정보 전체 출력" << endl;
//		cout << "5. 프로그램 종료" << endl;
//		cout << "선택: ";
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
//			cout << "[계좌개설]" << endl;
//			cout << "계좌ID: ";
//			cin >> account;
//			cout << "이름: ";
//			cin >> name;
//			cout << "입금액: ";
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
//			cout << "[입\t금]" << endl;
//			cout << "계좌ID: ";
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
//			cout << "[출\t금]" << endl;
//			cout << "계좌ID: ";
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
//			cout << "프로그램을 종료합니다." << endl;
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
//		cout << "입금액: ";
//		cin >> money;
//		this->_money += money;
//		cout << "입금완료" << endl;
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
//		cout << "출금액: ";
//		cin >> money;
//
//		if (this->_money - money >= 0)
//		{
//			this->_money -= money;
//			cout << "출금완료" << endl;
//			cout << endl;
//		}
//		else
//		{
//			cout << "금액을 초과했습니다." << endl;
//			return;
//		}
//	}
//}
//
//void Account::PrintAccount() const
//{
//	cout << "계좌ID: " << this->_account << endl;
//	cout << "이 름: " << this->_name << endl;
//	cout << "잔 액: " << this->_money << endl;
//	cout << endl;
//}
