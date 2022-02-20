#include <iostream>
using namespace std;
int main ()
{
	setlocale(0, "");
	int a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	int c = a + b;
	const << "Sum of numbers = " << c << endl;
	return 0;
}