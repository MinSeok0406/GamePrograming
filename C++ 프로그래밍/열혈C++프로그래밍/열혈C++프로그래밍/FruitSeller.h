#pragma once
#include <iostream>
using namespace std;

class FruitSeller
{
public:
	FruitSeller(int price, int num, int money);
	~FruitSeller();

public:
	int SaleApples(int money);
	void ShowSaleResult() const;

private:
	int _applePrice = 0;
	int _numOfApples = 0;
	int _myMoney = 0;
};

