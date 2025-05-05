//#include <iostream>
//#include <map>
//using namespace std;
//
//#define USER 100
//
//int account[USER] = { 0 };
//map<int, string> name;
//int money[USER] = { 0 };
//int user = -1;
//
//void CreateAccount()
//{
//	string _name;
//
//	user++;
//
//	cout << "[계좌개설]" << endl;
//	cout << "계좌ID: ";
//	cin >> account[user];
//
//	if (name.find(account[user]) != name.end())
//	{
//		account[user] = 0;
//		user--;
//		cout << "이미 존재하는 ID 입니다." << endl;
//		return;
//	}
//
//	cout << "이름: ";
//	cin >> _name;
//	cout << "입금액: ";
//	cin >> money[user];
//	cout << endl;
//
//	name.insert({ account[user], _name });
//}
//
//void InputMoney()
//{
//	int _account = 0;
//
//	cout << "[입\t금]" << endl;
//	cout << "계좌ID: ";
//	cin >> _account;
//
//	for (int i = 0; i < USER; i++)
//	{
//		if (_account == account[i])
//		{
//			int _money = 0;
//
//			cout << "입금액: ";
//			cin >> _money;
//			money[i] += _money;
//			cout << "입금완료" << endl;
//			cout << endl;
//
//			break;
//		}
//	}
//}
//
//void OutputMoney()
//{
//	int _account = 0;
//
//	cout << "[출\t금]" << endl;
//	cout << "계좌ID: ";
//	cin >> _account;
//
//	for (int i = 0; i < USER; i++)
//	{
//		if (_account == account[i] && money[i] > 0)
//		{
//			int _money = 0;
//
//			cout << "출금액: ";
//			cin >> _money;
//
//			if (money[i] - _money >= 0)
//			{
//				money[i] -= _money;
//				cout << "출금완료" << endl;
//				cout << endl;
//			}
//			else
//			{
//				cout << "금액을 초과했습니다." << endl;
//				return;
//			}
//
//			break;
//		}
//	}
//}
//
//void PrintAccount()
//{
//	for (int i = 0; i <= user; i++)
//	{
//		cout << "계좌ID: " << account[i] << endl;
//		cout << "이 름: " << name[account[i]] << endl;
//		cout << "잔 액: " << money[i] << endl;
//		cout << endl;
//	}
//}
//
//int main(void)
//{
//	int n = 0;
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
//			return;
//
//		switch (n)
//		{
//		case 1:
//			CreateAccount();
//			break;
//		case 2:
//			InputMoney();
//			break;
//		case 3:
//			OutputMoney();
//			break;
//		case 4:
//			PrintAccount();
//			break;
//		case 5:
//			cout << "프로그램을 종료합니다." << endl;
//			return 0;
//			break;
//		}
//	}
//
//	return 0;
//}