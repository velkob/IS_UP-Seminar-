#include "pch.h"
#include <iostream>
const int MAX_SIZE = 100;

int main()
{
	int arr[MAX_SIZE] = { 0 };
	int n = 0;
	int blank = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < n/2; i++)
	{
		blank = arr[i];
		arr[i] = arr[n - i - 1 ];
		arr[n - i - 1] = blank;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

}

