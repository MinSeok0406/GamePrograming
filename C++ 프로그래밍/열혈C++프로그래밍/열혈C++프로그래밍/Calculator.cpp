#include "Calculator.h"



Calculator::Calculator(int add, int min, int mul, int div) :
	_add(add), _min(min), _mul(mul), _div(div)
{

}

Calculator::~Calculator()
{

}

float Calculator::Add(float a, float b)
{
	_add++;
	return a + b;
}

float Calculator::Min(float a, float b)
{
	_min++;
	return a - b;
}

float Calculator::Mul(float a, float b)
{
	_mul++;
	return a * b;
}

float Calculator::Div(float a, float b)
{
	_div++;
	return a / b;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << _add << " »¬¼À: " << _min << " °ö¼À: " << _mul << " ³ª´°¼À: " << _div << endl;
}
