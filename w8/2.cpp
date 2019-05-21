#include "pch.h"
#include <iostream>
const int SIZE = 100;
void fun1(int arr)
{

}
void fun2(int arr)
{

}
int main()
{
	int amountofNum = 0, arr[SIZE] = { 0 };
	std::cout << "Enter amount of number you'll enter: ";
	std::cin >> amountofNum;
	for (int i = 0; i < amountofNum; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 1; i < amountofNum; i+=2)
	{
		if (i < amountofNum - 1)
		{
			if (!((arr[i - 1] < arr[i]) && (arr[i + 1] < arr[i])))
			{
				std::cout << "Its not a saw" << std::endl;
				break;
			}
		}
		else
		{
			if (!(arr[i - 1] < arr[i]))
			{
				std::cout << "Its not a saw" << std::endl;
				break;
			}
		}
		
	}
	std::cout << "its a saw" << std::endl;
}

