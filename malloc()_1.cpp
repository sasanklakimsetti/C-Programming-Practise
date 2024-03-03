#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
int n,*ptr,i,sum=0;
printf("enter number of elements: ");
scanf("%d",&n);

ptr = (int*)malloc(n * (sizeof(int)));

if(ptr==NULL)
{
	printf("Memory not allocated\n");
	exit(0);
}
else
{
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}
	printf("Sum is %d",sum);
}
}

