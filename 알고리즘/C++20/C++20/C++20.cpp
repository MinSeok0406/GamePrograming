#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <ranges>
#include <coroutine>
#include "MyCoroutine.h"
#include <random>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

int Add(int a, int b)
{
    return a + b;
}


int main()
{
    int a = 2;
    int b = 3;

    int result = Add(a, b);

    return 0;

}