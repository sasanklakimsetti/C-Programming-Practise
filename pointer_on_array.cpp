//POINTER ON ARRAY

#include<stdio.h>
using namespace std;

main()
{
	int b[5] = {1,2,3,4,5};
	int *p,i;
	for(i=0;i<=4;i++)
	{
		printf("%d \n",b[i]);
	}
	p = b;
	for(i=0;i<=4;i++)
	{
		printf("%d \n",*(p + i));
	}
}
