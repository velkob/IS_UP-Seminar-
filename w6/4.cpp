#include "pch.h"
#include <iostream>

int main()
{
	int n,stars=1;
	std::cin >> n;
	int spaces = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = spaces; j >= 0; j--)
		{
			std::cout << " ";
		}
		for (int k = 0; k < stars; k++)
		{
			std::cout << '*';
		}
		stars += 2;
		spaces--;
		std::cout << std::endl;
	}
	stars -= 2;
	spaces++;
	for (int i = 0; i < n-1; i++)
	{
		spaces++;
		stars -= 2;
		for (int j = spaces; j>=0 ; j--)
		{
			std::cout << " ";
		}
		for (int k = 0; k < stars; k++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}

