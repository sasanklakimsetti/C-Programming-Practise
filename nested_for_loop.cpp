//nested for loop
#include<stdio.h>
using namespace std;
main()
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d%d\t",i,j);
		}
		printf("\n");
	}
}
