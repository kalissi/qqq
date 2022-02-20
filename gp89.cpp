#include <iostream>

int main ()
{
	char nums1[] = {1,2,3,4,5};
	char nums2[] = nums1;
	nums1=nums2;
    std::cout << nums1 << std::endl;
	return 0;
}
