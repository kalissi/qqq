#include <iostream>

int main ()
{
	auto number = 2;
	//Неинициализированные переменные со спецификатором auto не допускаются
	std::cout << "sizeof(number) =" << sizeof(number);
	return 0;
}
