#include "Printer.h"

Printer::Printer(string str) : _str(str)
{
}

Printer::~Printer()
{
}

void Printer::SetString(string str)
{
	_str = str;
}

void Printer::ShowString()
{
	cout << _str << endl;
}
