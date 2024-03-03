//1-D ARRAY PRINTF AND SCANF

#include<stdio.h>
using namespace std;
main()
{
	int n;
	printf("no.of Elements in array\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements in the array are \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
