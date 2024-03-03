//2-ARRAY SUM AND AVG

#include<stdio.h>
using namespace std;

main()
{
	int m,n;
	printf("No.of rows in the array \n");
	scanf("%d",&m);
	
	printf("No.of columns in the array \n");
	scanf("%d",&n);
	
	int a[m][n],i,j,sum=0,avg;
	printf("Enter the elements in the array \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in the array are \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = sum + a[i][j];
		}
	}
	printf("Sum of the elements in the array is %d",sum);
	printf("Avg of the elements is %d",sum/(m+n));
}
