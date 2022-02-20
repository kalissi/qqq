#include <iostream>

int main ()
{
	int code = 'g';
	// числовой переменной типа int присваивается символ 'g'. 
	// переменная получит числовой код этого символа в таблице ASCII.
	char letter = 103;
	//переменная letter будет хранить символ, 
	//чей код в таблице ASCII равен 103, то есть символ 'g'.
	std::cout << letter << " in ASCII is " << code << "\n";
	return 0;
}
