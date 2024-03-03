//Matrix Addition using array

#include<stdio.h>
using namespace std;

main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf("Enter the values of elements for matrix A \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of elements for matrix B \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Resultant Matrix after addition of matrices is \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("End of the Program");
}
