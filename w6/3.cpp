#include "pch.h"
#include <iostream>
const int MAX_SIZE = 100;
int main()
{
	int number = 0,reverseNum=0,multiplier=1;
	std::cout << "Enter a number: ";
	std::cin >> number;
	while (number != 0)
	{
		int last = number % 10;
		reverseNum=reverseNum*10+last;
		number /= 10;
	}
	std::cout << reverseNum << std::endl;
}

