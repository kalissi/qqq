#include <iostream>

int main ()
{
	const int number = 5;
	int &refNumber = number;
	// не константную сылку константной мы не можем иницыализировать 
	std::cout << refNumber << std::endl;
	return 0;
}