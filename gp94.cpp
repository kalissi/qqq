#include <iostream>

int main ()
{
	int numbers[4] = {1,2,3,4};
	for(auto number : numbers)
	std::cout << number << std::endl;
	return 0;
}
