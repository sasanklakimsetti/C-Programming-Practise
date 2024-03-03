//POINTER ADDITION
#include<stdio.h>
using namespace std;
main()
{
	int x,*p;
	x = 15;
	p = &x;
	printf("Address of x is %d",p);
	p += 3;
	printf("\nAddress of x after addition is %d",p);
}
