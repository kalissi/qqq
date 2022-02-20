#include <iostream>
#include <string>

void square(int);
void display(std::string, int);

int main()
{
	display("Tom", 33);
	square(4.56);

	return 0;
}

void square(int x)
{
	std::cout << "Square of " << x << " is eqal to " << x * x << std::endl;
}
void display(std::string name, int age)
{
	std::cout << "Name: " << name << "\tAge: " << age << std::endl;
}
