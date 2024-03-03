//ARRAYS

#include<stdio.h>
using namespace std;
main()
{
	int a[4],i;
	printf("Enter any four numbers \n");
	for (i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Element = ");
	for (i=0;i<=3;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("STOP");
}

