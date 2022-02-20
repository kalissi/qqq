#include <iostream>
using namespace std;

int main()
{
	   cout << "Entev an integer: " << "\n";
	int x;
	   cin >> x;
	int i = x;
	do
	{
	   cout << i << std:: endl;
	   i--;
	}
	while(i>0);
	if(x > 0)
	   cout << "Apositive number" << "\n";
	else if(x < 0)
	   cout << "Negative number" << "\n";
	else
	   cout << "Equal to zero" << "\n";
	
	return 0;
}
