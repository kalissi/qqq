#include <string>
#include <iostream>


int main()
{
	std::string s1 = "Aport";
	std::string s2 = "Apricot";
	
	

	 bool result = s1 > s2;
	 result = s1 < s2;
	 // для узнавание точности кто больше а кто меньше 
	// std::cout << s2 << "\n";
	// std::cout << bool(s1>s2) << "\n";
		std::cout << (s1 > s2) << " " << (s1 < s2) <<"\n";  

	return 0;
}
