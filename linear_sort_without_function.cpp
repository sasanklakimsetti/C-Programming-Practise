//linear search without function

#include<stdio.h>
using namespace std;

main()
{
	int n;
	printf("No.of elements in array \n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements of array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is %d \n",a[i]);
	int ele;
	printf("Element to be searched from the array \n");
	scanf("%d",&ele);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			printf("The element is found at %dth index and %dth position \n",i,i+1);
			break;
		}
	}
	if(i == n)
	{
		printf("NOT FOUND \n");
	}
}
