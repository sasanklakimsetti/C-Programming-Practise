//SUBTRACTION OPERATOR IN POINTER
#include<stdio.h>
using namespace std;
main()
{
	int x,*p;
	x = 1234;
	p = &x;
	printf("Address of x is %d",p);
	p -= 45;
	printf("\nValue of x after subtraction is %d",p);
}
