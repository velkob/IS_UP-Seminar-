#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*int number,progressionSum=0;
	cout << "Enter a number: ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		progressionSum += i;
		for (int j = 1; j <= i; j++)
		{
			cout << j;
			if (j < i)
			{
				cout << " + ";
			}
		}
		cout << " = " << progressionSum << endl;
	}*/
	int number, progressionSum=0,reverseNum=1,progressionNum=1;
	cout << "Enter a number: ";
	cin >> number;
	while (reverseNum<=number)
	{
		progressionSum += reverseNum;
		while (progressionNum<=reverseNum)
		{
			cout << progressionNum;
			if (progressionNum < reverseNum)
			{
				cout << " + ";
			}
			progressionNum++;
			
		}
		reverseNum++;
		cout <<" = "<< progressionSum << endl;
		progressionNum = 1;
	}
}

