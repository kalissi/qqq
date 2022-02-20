#include <iostream>
int main ()
{
short a = -10;
unsigned short b= 10;
int c = -30;
unsigned int d = 60;
long e = -128;
unsigned long f = 45;
long long g = 89;
std::cout << a << (unsigned long)b << (unsigned long)c << (unsigned long)d << (unsigned long)e 
<< (unsigned long)f << (unsigned long)g << "\n";
return 0;
}
