#include<cmath>
#include<iostream>
#include"FloatPower.h"

using namespace std;

void FloatPower::SetFirst(double value)
{
	first = value;
}

void FloatPower::SetSecond(double value)
{
	second = value;
}

bool FloatPower::Init(double x, double y)
{
	first = x;
	second = y;

	if (x != 0)
	{
		first = x;
		return true;
	}
	else
	{
		first = 0;
		return false;
	}
}
void FloatPower::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}

void FloatPower::Read()
{
	double x, y;
	cout << "first =  ";
	cin >> x;

	cout << "second = ";
	cin >> y;
	Init(x, y);
}

double FloatPower::power()
{
	double a;

	a = pow(first, second);

	return a;
}
