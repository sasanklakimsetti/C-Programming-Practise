//Program to calculate the sum of n numbers entered ny the user
#include<stdio.h>
#include<stdlib.h>

using namespace std;

main()
{
	int n,i,*ptr,sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	ptr = (int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\nError in memory allocation.");
		exit(0);
	}
	
	printf("\nEnter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum += *(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
	return 0;
}
