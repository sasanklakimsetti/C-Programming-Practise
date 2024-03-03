#include<stdio.h>
using namespace std;
main()
{
	int balance[5] = {1,2,3,4,5};
	int *p;
	int i;
	p = balance;
	printf("Array values using pointer \n");
	for(i = 0;i<5;i++)
	{
		printf("%d \n",*(p + i));
	}
	printf("Array elements using balance as address \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(balance + i));
	}
	printf("STOP");
}
