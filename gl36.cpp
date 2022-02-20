#include <iostream>

void display();

int main()
{
	display();
	display();
	display();
	return 0;
}

void display()
{
	int i = 0;
	i++;
	std::cout << "i=" << i << std::endl;
}

