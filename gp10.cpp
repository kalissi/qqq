#include <iostream>

int main ()
{
	char a = 'H';
	wchar_t b = 'e';
	char16_t c = 'l';
	char32_t d = 'o';
	std::cout << a  << (char)b <<  (char)c << (char)d << "\n";
	return 0;
}
