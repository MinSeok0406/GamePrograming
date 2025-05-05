#pragma once
#include <iostream>
#include "FruitSeller.h"
using namespace std;


class FruitBuyer
{
public:
	FruitBuyer(int money);
	~FruitBuyer();

public:
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult() const;

private:
	int _myMoney = 0;
	int _numOfApples = 0;
};

