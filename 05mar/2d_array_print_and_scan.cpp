//2-ARRAY PRINTF ND SCANF

#include<stdio.h>
using namespace std;

main()
{
	int m,n;
	printf("No.of rows in the array \n");
	scanf("%d",&m);
	
	printf("No.of columns in the array \n");
	scanf("%d",&n);
	
	int a[m][n],i,j;
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
}
