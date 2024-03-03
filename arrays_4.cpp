//print sum of 4 elements in the array form
//2-D ARRAYS
#include<stdio.h>
using namespace std;
main()
{
	int a[2][2],i,j,sum=0;
	printf("Enter any four elements \n");
	
	for (i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements are \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			sum=sum+a[i][j];
			printf("%d\t",sum);	
		}
		printf("%d\n",sum);	
	}
	printf("%d",sum);	

}
