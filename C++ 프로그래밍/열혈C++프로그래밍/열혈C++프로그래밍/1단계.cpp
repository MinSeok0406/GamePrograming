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
//	cout << "[���°���]" << endl;
//	cout << "����ID: ";
//	cin >> account[user];
//
//	if (name.find(account[user]) != name.end())
//	{
//		account[user] = 0;
//		user--;
//		cout << "�̹� �����ϴ� ID �Դϴ�." << endl;
//		return;
//	}
//
//	cout << "�̸�: ";
//	cin >> _name;
//	cout << "�Աݾ�: ";
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
//	cout << "[��\t��]" << endl;
//	cout << "����ID: ";
//	cin >> _account;
//
//	for (int i = 0; i < USER; i++)
//	{
//		if (_account == account[i])
//		{
//			int _money = 0;
//
//			cout << "�Աݾ�: ";
//			cin >> _money;
//			money[i] += _money;
//			cout << "�ԱݿϷ�" << endl;
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
//	cout << "[��\t��]" << endl;
//	cout << "����ID: ";
//	cin >> _account;
//
//	for (int i = 0; i < USER; i++)
//	{
//		if (_account == account[i] && money[i] > 0)
//		{
//			int _money = 0;
//
//			cout << "��ݾ�: ";
//			cin >> _money;
//
//			if (money[i] - _money >= 0)
//			{
//				money[i] -= _money;
//				cout << "��ݿϷ�" << endl;
//				cout << endl;
//			}
//			else
//			{
//				cout << "�ݾ��� �ʰ��߽��ϴ�." << endl;
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
//		cout << "����ID: " << account[i] << endl;
//		cout << "�� ��: " << name[account[i]] << endl;
//		cout << "�� ��: " << money[i] << endl;
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
//			cout << "���α׷��� �����մϴ�." << endl;
//			return 0;
//			break;
//		}
//	}
//
//	return 0;
//}