//DECREMENT OPERATOR IN POINTER
#include<stdio.h>
using namespace std;
main()
{
	int x,*p;
	x = 17;
	p = &x;
	printf("Address of x is %d",p);
	p -= 1;
	printf("\nAddress of x after decrementing is %d",p);
}
