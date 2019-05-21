#include "pch.h"
#include <iostream>
void swp(int &number1, int &number2)
{
	int swp = 0;
	swp = number1;
	number1 = number2;
	number2 = swp;
}
void output(int &number1, int &number2)
{
	swp(number1, number2);
	std::cout << number1 << std::endl;
	std::cout << number2 << std::endl;
}
int main()
{
	int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;
	output(num1, num2);
}

