//display the multiplication table from 1 to n
#include<stdio.h>
using namespace std;
main()
{
	long int i,j,k;
	long int n;
	printf("Enter a number: \n");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
		k=i*j;
		printf("%ld * %ld = %ld \n",i,j,k);
		}
		printf("\n");
	}
}
