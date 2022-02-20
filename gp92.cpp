#include <iostream>

int main ()
{
	int numbers[4] = {1,2,3,4};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	for(int i=0; i < size; i++)
	std::cout << numbers[i] << std::endl;
    return 0;
}
