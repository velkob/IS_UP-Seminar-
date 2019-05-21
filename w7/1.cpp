
#include "pch.h"
#include <iostream>
const int MAX_SIZE = 100;
int main()
{
	int arr[MAX_SIZE] = { 0 };
	int n = 0;
	int avarage = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
		avarage += arr[i];
	}
	std::cout<<"Their avarage is: " << avarage / n << std::endl;
}

