#include "FruitBuyer.h"

FruitBuyer::FruitBuyer(int money) : _myMoney(money)
{
}

FruitBuyer::~FruitBuyer()
{
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	_numOfApples += seller.SaleApples(money);
	_myMoney -= money;
}

void FruitBuyer::ShowBuyResult() const
{
	cout << "���� �ܾ�: " << _myMoney << endl;
	cout << "��� ����: " << _numOfApples << endl;
}
