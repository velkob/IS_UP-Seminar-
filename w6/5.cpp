#include "pch.h"
#include <iostream>

int main()
{
	int number, lastDigit = 0, firstDigit = 0,temp=0;
	std::cin >> number;
	temp = number;
	lastDigit = number % 10;
	std::cout << "The last digit of " << number << " is:" << lastDigit << std::endl;
	while (temp > 10)
	{
		temp /= 10;
	}
	firstDigit = temp;
	std::cout << "The first digit of " <<number<<" is: "<< firstDigit << std::endl;

	if (lastDigit == firstDigit)
	{
		std::cout << "The first and the last digits are the same." << std::endl;
	}
	else
	{
		std::cout << "The first and the last digits are not the same\n";
	}
}

