//WILD POINTER
#include<stdio.h>
using namespace std;
main()
{
	int *ptr,x;
	x = 17;
	ptr = &x;
	printf("Value of the *ptr is %d",*ptr);
}
