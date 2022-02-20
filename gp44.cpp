#include <iostream>

int main ()
{
	int a = 8;
	int b = 7;
	int c = a + 5 * ++b;
	std::cout << c << "\n";
	return 0;
}