#include "pch.h"
#include <iostream>
const int MAX_SIZE = 100;
int main()
{
	int sum = 0;
	char arr[MAX_SIZE];
	char symbol;
	std::cin >> arr;
	std::cin >> symbol;
	for (int i = 0; arr[i]!='\0'; i++)
	{
		if (symbol==arr[i])
		{
			sum++;
		}
	}
	std::cout << sum << std::endl;
}

