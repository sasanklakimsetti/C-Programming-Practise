//ARRAYS
#include<stdio.h>
using namespace std;
main()
{
	int a[5],i,sum=0,avg;
	printf("Enter any five numbers \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Element = ");
	for(i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
		printf("sum = %d \n",sum);
		avg = sum / 4;
		printf("Avg = %d",avg);

}
