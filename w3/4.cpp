
#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	char a;
	int b;
	cin >> a;
	if (a > 48 && a <= 57)
	{
		int ia = a - '0';
		b = ia * ia;

		cout << b << endl;
	}
	else if (a >= 65 && a <= 90)
	{
		a = (int)(a)+32;
		cout << a << endl;

	}
	else if (a >= 97 && a <= 122)
	{
		a = (int)(a)-32;
		cout << a << endl;
	}

	return 0;
}
