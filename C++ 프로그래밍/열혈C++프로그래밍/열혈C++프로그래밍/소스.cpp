#include <iostream>
#include <string>
using namespace std;

static int total = 0;

class Widget
{
public:
	Widget()
	{
		total += (++v);
		show();
	}

	virtual void show()
	{
		total += total;
	}

protected:
	int v = 1;
};

class Children : public Widget
{
public:
	Children()
	{
		v += 2;
		total += v++;
		show();
	}

	void show() override
	{
		total += total * 2;
	}

protected:
	int v = 10;
};

int main(void)
{
	new Children();
	cout << total << endl;
}