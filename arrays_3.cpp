//2-D ARRAYS
#include<stdio.h>
using namespace std;
main()
{
	int a[2][2],i,j;
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
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("STOP");
}
