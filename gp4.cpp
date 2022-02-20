#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	// дело в кодировке windows 1251
	std::cout <<"привет мир!";
	return 0;
}
				