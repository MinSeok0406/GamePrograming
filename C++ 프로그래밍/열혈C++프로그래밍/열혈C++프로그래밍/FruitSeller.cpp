#include "FruitSeller.h"

FruitSeller::FruitSeller(int price, int num, int money)
	: _applePrice(price), _numOfApples(num), _myMoney(money)
{

}

FruitSeller::~FruitSeller()
{

}

int FruitSeller::SaleApples(int money)
{
	if (money / _applePrice < 1)
		return 0;

	int num = money / _applePrice;
	_numOfApples -= num;
	_myMoney += money;

	return num;
}

void FruitSeller::ShowSaleResult() const
{
	cout << "���� ���: " << _numOfApples << endl;
	cout << "�Ǹ� ����: " << _myMoney << endl;
}
