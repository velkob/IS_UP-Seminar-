#include "pch.h"
#include <iostream>
const int MAX_SIZE = 100;
int main()
{
	char arr[MAX_SIZE];
	std::cin >> arr;
	for (int i = 0; arr[i]!='\0' ; i++)
	{
		if ((int)arr[i]>64&&(int)arr[i]<91)
		{
			arr[i] += 32;
		}
		else if ((int)arr[i]>96&&(int)arr[i]<123)
		{
			arr[i] -= 32;
		}
	}
	for (int i = 0; arr[i] != '\0'; i++)
	{
		std::cout << arr[i]<<" ";
	}
	std::cout << std::endl;
}

