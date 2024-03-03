//2D ARRAY MULTIPLICATION

#include<stdio.h>
using namespace std;

main()
{
	int m,n;
	printf("No.of rows in the array \n");
	scanf("%d",&m);
	
	printf("No.of columns in the array \n");
	scanf("%d",&n);
	
	int a[m][n],b[m][n],c[m][n],i,j,k;
	
	printf("Enter the elements in the array 'a' \n");
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
	printf("Enter the elements in the array 'b' \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The elements in the array are \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	printf("Product of matrices is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = 0;
			for(k=0;k<n;k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
