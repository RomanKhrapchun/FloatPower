#include<iostream>
#include"FloatPower.h"

using namespace std;

FloatPower makeFloatPower(double x, double y)
{
	FloatPower z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}

int main()
{
	FloatPower z;
	z.Read();
	z.Display();

	double x, y;

	cout << "Input complex value:" << endl << endl;
	cout << "first = "; cin >> x;
	cout << "second = "; cin >> y;

	z = makeFloatPower(x, y);
	z.Display();
	cout << "pow(x, y) = [ " << z.power() << " ];" << endl;

	cin.get();
	return 0;
}