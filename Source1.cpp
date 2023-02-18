#include <iostream>
using namespace std;

int main()
{
	int num1 = 5;
	int num2 = 3;
	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;

	num1++;
	cout << "num1++ =" << num1 << endl;
	++num1;
	cout << "++num1 =" << num1 << endl;
}