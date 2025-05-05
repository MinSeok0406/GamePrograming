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
	cout << "현재 잔액: " << _myMoney << endl;
	cout << "사과 개수: " << _numOfApples << endl;
}
