#include <iostream>

int main ()
{
	const int number = 5;
	const int &refNumber = number;
	std::cout << refNumber << std::endl;
	refNumber = 20;
	// изменять значение по сылке нельзя 
	std::cout << number << std::endl;
	return 0;
}