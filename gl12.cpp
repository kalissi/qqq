#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer: " << "\n";
	int x;
	cin >> x;
	if(x > 0)
	{
		while(x--)
		{
   			cout << x << " * " << x << " = " << x * x << std:: endl;
		}
		cout << "Apositive number" << "\n";
	}
	else if(x < 0)
	   cout << "Negative number" << "\n";
	else
	   cout << "Equal to zero" << "\n";
	
	return 0;
}
