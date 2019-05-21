#include "pch.h"
#include <iostream>
const int MAX_SIZE = 100;
int main()
{
	int n = 0, digitMulti = 1;;
	int arr[MAX_SIZE] = { 0 };
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter a number: ";
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		int blank = arr[i];
		while (blank != 0)
		{
			digitMulti *= blank % 10;
			blank /= 10;
		}
		if (digitMulti < 10)
		{
			std::cout << arr[i] << std::endl;
		}
		digitMulti = 1;
	}
	
}

