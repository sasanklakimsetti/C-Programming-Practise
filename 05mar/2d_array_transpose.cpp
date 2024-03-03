//2D TRANSPOSE

#include<stdio.h>
using namespace std;
main()
{
	long int m,n;
	printf("No.of rows in the array \n");
	scanf("%ld",&m);
	
	printf("No.of columns in the array \n");
	scanf("%ld",&n);
	
	long int a[m][n],b[m][n],i,j,k;
	printf("Enter the elements in the array \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%ld",&a[i][j]);
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
	printf("Transpose of the array is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j] = a[j][i];
			printf("%ld \t",b[i][j]);
		}
		printf("\n");

	}
}
