#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*float number=0, biggestNum=-INFINITY,smallestNum=INFINITY,numberOfNumbers=0,Sum=0;
	cout << "Enter a sequence of numbers: " << endl;
	while (number!=-1)
	{
		cin >> number;
		if (number != -1)
		{
			if (number > biggestNum)
			{
				biggestNum = number;
			}
			if (number < smallestNum)
			{
				smallestNum = number;
			}
			Sum += number;
			numberOfNumbers++;
		}
	}
	cout << "The biggest number is: " << biggestNum << endl;
	cout << "The smallest number is: " << smallestNum << endl;
	cout << "The average is: " << Sum / numberOfNumbers << endl;*/
	/*float number, smallestNum=INFINITY, biggestNum=-INFINITY, numberOfNumbers=0, sumOfNumbers=0;
	cout << "Enter a sequence of numbers: " << endl;
	for (int i = 0;; i++)
	{
		cin >> number;
		if (number == -1)
		{
			break;
		}
		else
		{
			if (number > biggestNum)
			{
				biggestNum = number;
			}
			if (number < smallestNum)
			{
				smallestNum = number;
			}
			numberOfNumbers++;
			sumOfNumbers += number;
		}

	}
	cout << "The biggest number is: " << biggestNum << endl;
	cout << "The smallest number is: " << smallestNum << endl;
	cout << "The average is: " << sumOfNumbers / numberOfNumbers << endl;*/
	float number, biggestNum=-INFINITY, smallestNum=INFINITY, numberOfNumbers=0, sumOfNumbers=0;
	cout << "Enter a sequence of numbers: " << endl;
	do
	{
		cin >> number;
		if (number == -1)
		{
			break;
		}
		if (biggestNum < number)
		{
			biggestNum = number;
		}
		if (smallestNum > number)
		{
			smallestNum = number;
		}
		numberOfNumbers++;
		sumOfNumbers += number;
	} while (number!=-1);
	cout << "The biggest number is: " << biggestNum << endl;
	cout << "The smallest number is: " << smallestNum << endl;
	cout << "The average is: " << sumOfNumbers / numberOfNumbers << endl;
}

