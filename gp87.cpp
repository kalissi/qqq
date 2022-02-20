#include <iostream>

int main ()
{
	int number = 5;
	const int &refNumber = number;
	std::cout << refNumber << std::endl;
	number = 20;
	std::cout << refNumber << std::endl;
	return 0;
}
