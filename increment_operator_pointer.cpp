//INCREMENT OPERATOR IN POINTER

#include<stdio.h>
using namespace std;
main()
{
	int x,*p;
	x = 10;
	p = &x;
	printf("Address of p is %d\n",p);
	p += 1;
	printf("Address of p after increment is %d",p);
}
