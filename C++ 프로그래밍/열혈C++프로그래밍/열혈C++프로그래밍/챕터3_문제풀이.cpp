//#include <iostream>
//#include "Calculator.h"
//#include "Printer.h"
//using namespace std;
//
//struct Point
//{
//	int xpos;
//	int ypos;
//
//	void MovePos(int x, int y);
//	void AddPoint(const Point& pos);
//	void ShowPosition();
//};
//
//// ���� �̵�
//void Point::MovePos(int x, int y)
//{
//	xpos += x;
//	ypos += y;
//}
//
//// ���� ��ǥ����
//void Point::AddPoint(const Point& pos)
//{
//	xpos += pos.xpos;
//	ypos += pos.ypos;
//}
//
//// ���� x, y ��ǥ���� ���
//void Point::ShowPosition()
//{
//	cout << "[" << xpos << " ," << ypos << "]" << endl;
//}
//
//int main(void)
//{
//#pragma region ����1
//	/*Point pos1 = { 12, 4 };
//	Point pos2 = { 20, 30 };
//
//	pos1.MovePos(-7, 10);
//	pos1.ShowPosition();
//
//	pos1.AddPoint(pos2);
//	pos1.ShowPosition();
//	return 0;*/
//#pragma endregion
//
//#pragma region ����2
//	/*Calculator* cal = new Calculator(0, 0, 0, 0);
//
//	cout << "3.2 + 2.4 = " << cal->Add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal->Div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal->Min(2.2, 1.5) << endl;
//	cout << "4.9 / 1.2 = " << cal->Div(4.9, 1.2) << endl;
//	cal->ShowOpCount();
//
//	delete cal;
//	return 0;*/
//#pragma endregion
//
//#pragma region ����3
//	Printer* ptr = new Printer("");
//	ptr->SetString("Hello world!");
//	ptr->ShowString();
//
//	ptr->SetString("I love C++");
//	ptr->ShowString();
//
//	delete ptr;
//
//	return 0;
//#pragma endregion
//}