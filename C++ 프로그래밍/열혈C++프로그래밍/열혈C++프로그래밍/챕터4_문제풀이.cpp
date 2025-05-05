//#include <iostream>
//#include "FruitSeller.h"
//#include "FruitBuyer.h"
//#include "NameCard.h"
//using namespace std;
//
//#pragma region 문제2, 3
//class Point
//{
//public:
//	Point() { }
//	Point(int x, int y) : _xpos(x), _ypos(y)
//	{
//
//	}
//	~Point()
//	{
//
//	}
//
//	void ShowPointInfo() const
//	{
//		cout << "[" << _xpos << ", " << _ypos << "]" << endl;
//	}
//
//private:
//	int _xpos = 0;
//	int _ypos = 0;
//};
//
//class Circle
//{
//public:
//	Circle() : _radius(0)
//	{
//
//	}
//
//	Circle(Point& pos, int radius) : _pos(pos), _radius(radius)
//	{
//
//	}
//	~Circle()
//	{
//
//	}
//
//	void ShowCircleInfo() const
//	{
//		cout << "radius: " << _radius << endl;
//		_pos.ShowPointInfo();
//		cout << endl;
//	}
//
//private:
//	Point _pos;
//	int _radius;
//};
//
//class Ring
//{
//public:
//	Ring(int inX, int inY, int inRadius, int outX, int outY, int outRadius)
//	{
//		Point* inPos = new Point(inX, inY);
//		_inner = new Circle(*inPos, inRadius);
//
//		Point* outPos = new Point(outX, outY);
//		_outter = new Circle(*outPos, outRadius);
//	}
//	~Ring()
//	{
//		delete _inner;
//		delete _outter;
//	}
//
//	void ShowRingInfo() const
//	{
//		cout << "Inner Circle Info..." << endl;
//		_inner->ShowCircleInfo();
//
//		cout << "Outter Circle Info..." << endl;
//		_outter->ShowCircleInfo();
//	}
//
//private:
//	Circle* _inner;
//	Circle* _outter;
//};
//#pragma endregion
//
//int main(void)
//{
//#pragma region 문제1
//	/*FruitSeller* seller = new FruitSeller(1000, 20, 0);
//	FruitBuyer* buyer = new FruitBuyer(5000);
//	buyer->BuyApples(*seller, 2000);
//
//	cout << "과일 판매자의 현황" << endl;
//	seller->ShowSaleResult();
//	cout << "과일 구매자의 현황" << endl;
//	buyer->ShowBuyResult();*/
//#pragma endregion
//
//#pragma region 문제2, 3
//	/*Ring* ring = new Ring(1, 1, 4, 2, 2, 9);
//	ring->ShowRingInfo();
//
//	delete ring;*/
//#pragma endregion
//
//#pragma region 문제4
//	/*NameCard* manClerk = new NameCard("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard* manSENIOR = new NameCard("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard* manAssist = new NameCard("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
//	manClerk->ShowNameCardInfo();
//	manSENIOR->ShowNameCardInfo();
//	manAssist->ShowNameCardInfo();
//
//	delete manClerk;
//	delete manSENIOR;
//	delete manAssist;*/
//#pragma endregion
//
//
//	return 0;
//}