

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b,c;
	cout << "Enter A,B and C: ";
	cin >> a >> b >> c;
	if (pow(b, 2) - 4 * a*c >= 0)
	{
		double D = sqrt(pow(b, 2) - 4 * a*c);
		cout << "x1 = " << (-b + D) / 2 * a << endl;
		cout << "x2 = " << (-b - D) / 2 * a << endl;
	}
	else
	{
		cout << "Incorrect numbers.";
	}
	
}




