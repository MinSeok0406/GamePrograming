#pragma once
#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
	Printer(string str);
	~Printer();

public:
	void SetString(string str);
	void ShowString();

private:
	string _str = "";
};

