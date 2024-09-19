#include <iostream>

template<typename T>
concept Integral = std::is_integral_v<T>;

int main()
{
    std::cout << "Hello World!\n";
}