#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*int number, digits[100], reverseNumber = 0, multiplier = 10, digitsNumber;
	cout << "Enter a number: ";
	cin >> number;
	if (number >= 0)
	{
		for (int i = 0;; i++)
		{
			digits[i] = number % 10;
			number /= 10;
			if (number < 10)
			{
				digitsNumber = i;
				reverseNumber = number;
				for (int j = digitsNumber; j >= 0; j--)
				{
					reverseNumber += digits[i] * multiplier;
					i--;
					multiplier *= 10;
				}
				break;
			}

		}
		cout << "The reverse number is: " << reverseNumber << endl;

	}
	else
	{
		number *= -1;
		for (int i = 0;; i++)
		{
			digits[i] = number % 10;
			number /= 10;
			if (number < 10)
			{
				digitsNumber = i;
				reverseNumber = number;
				for (int j = digitsNumber; j >= 0; j--)
				{
					reverseNumber += digits[i] * multiplier;
					i--;
					multiplier *= 10;
				}
				break;
			}

		}
		cout << "The reverse number is: " << -reverseNumber << endl;

	}*/
	int number, digit[100], reverseNumber=0,digitCounter=0,reverseMultiplier=10;
	bool positive = true;
	cout << "Enter a number: ";
	cin >> number;
	if (number < 0)
	{
		positive = 0;
		number*=-1;
	}
	while (number>10)
	{
		digit[digitCounter] = number % 10;
		number /= 10;
		digitCounter++;
	}
	reverseNumber = number;
	digitCounter--;
	while (digitCounter>=0)
	{
		reverseNumber += digit[digitCounter] * reverseMultiplier;
		reverseMultiplier *= 10;
		digitCounter--;
	}
	if (positive == 0)
	{
		cout << "The reverse number is: " << -reverseNumber << endl;

	}
	else cout << "The reverse number is: " << reverseNumber << endl;
}

