#include <iostream>

int main ()
{
	bool a = true;
	bool b = false;
	bool c = a && b;
	bool d = a && true;
	std::cout << c << ' ' << d << "\n";
	return 0;
}