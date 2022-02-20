#include <iostream>

int fibonachi(int);

int main()
{
	int n;
	for(int i = 0; i < 10; i++)
	{
		n = fibonachi(i);
		std::cout << n << ',' << "\t";
		// для того чтоб была запятая нужно её указать в выводе
	}
	std::cout << std::endl;
	return 0;
}

 	int fibonachi(int n)
 {
 	if(n == 0)
 		return 0;
 	if(n == 1)
 		return 1;
 	return fibonachi(n - 1) + fibonachi(n - 2);
 }

