#include<iostream>
using namespace std;
int Sum(int a, int b, int c=0);
int Diff(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);


void main() {
	setlocale(LC_ALL, "");

	cout << "Hello Functions " << endl;
	int a = 2;
	int b = 3;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
}
	int Sum(int a, int b, int c)
	{
		int res = a + b +c;
		return res;
	}
int Diff(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double) a / b;
}
	

