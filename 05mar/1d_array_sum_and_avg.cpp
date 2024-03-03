//1-D ARRAY SUM AND AVG

#include<stdio.h>
using namespace std;

main()
{
	int n;
	printf("No.of elements in the array \n");
	scanf("%d",&n);
	
	int a[n],i,sum=0,avg;
	printf("Enter the elements in the array \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Elements in the array are\n");
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf("Sum is %d",sum);
	
	printf("Average is %d",sum/n);
}
