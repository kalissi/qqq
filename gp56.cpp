#include <iostream>

int main ()
{
	bool a = -2 >5;
	bool b = 0 < 7;
	bool c = 10 > 5 && 7 < 11;
	bool d = a && b || c;
	std::cout << a << "\n";
	std::cout << b << "\n";
	std::cout << c << "\n";
	std::cout << d << "\n";
	return 0;
}
