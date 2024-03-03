#include<stdio.h>
using namespace std;
main()
{
	int a , *p;
	a=7;
	p = &a;
	printf("%d \n",a);
	*p = 9;
	printf("%d \n",a);
}
