
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number1 = 0, number2 = 0, sum = 0;
	char action;
	cout << "Enter 2 numbers: ";
	cin >> number1 >> number2;
	cout << "Enter an action(+,-,*,/):  ";
	cin >> action;
	if (action == '+')
	{
		sum = number1 + number2;
		cout << "The result is: " << sum<< endl;
	}
	else if (action == '-')
	{
		sum = number1 - number2;
		cout << "The result is: " << sum << endl;
	}
	else if (action == '*')
	{
		sum = number1 * number2;
		cout << "The result is: " << sum << endl;
	}
	else if (action == '/')
	{
		sum = number1 / number2;
		cout << "The result is: " << sum << endl;
	}
	else
	{
		cout << "Enter a valid action." << endl;
	}
}




