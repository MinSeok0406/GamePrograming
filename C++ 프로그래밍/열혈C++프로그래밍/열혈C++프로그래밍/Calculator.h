#pragma once
#include <iostream>
using namespace std;

class Calculator
{
public:
	Calculator(int add, int min, int mul, int div);
	~Calculator();

public:
	float Add(float a, float b);
	float Min(float a, float b);
	float Mul(float a, float b);
	float Div(float a, float b);
	void ShowOpCount();

private:
	int _add = 0;
	int _min = 0;
	int _mul = 0;
	int _div = 0;
};

