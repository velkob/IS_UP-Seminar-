#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*int number, digits=0;
	cout << "Enter a number: ";
	cin >> number;
	if (number < 0)
	{
		number *= -1;
	}
	while (number>10)
	{
		number /= 10;
		digits++;
	}
	digits++;
	cout << "The number of digits is: " << digits << endl;*/
	/*int number, digits = 1;
	cout << "Enter a number: ";
	cin >> number;
	if (number < 0)
	{
		number *= -1;
	}
	for (int i = 0;; i++)
	{
		number /= 10;
		digits++;
		if (number < 10)
		{
			break;
		}
	}
	cout << "The number of digits is: " << digits << endl;*/
	int number, digits = 1;
	cout << "Enter a number: ";
	cin >> number;
	if (number < 0)
	{
		number *= -1;
	}
	if (number > 0)
	{
		do
		{
			number /= 10;
			digits++;
		} while (number > 10);
	}
	else if (number == 0)
	{
		digits = 1;
	}
	
	cout << "The number of digits is: " << digits << endl; 

}

