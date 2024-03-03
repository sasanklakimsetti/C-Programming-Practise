//linear search using function

#include<stdio.h>
using namespace std;

int linear(int arr[],int size,int ele);

main()
{
	int n;
	printf("Enter the number of elements in the array \n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements in the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	int ele;
	printf("\n Element to be searched is \n");
	scanf("%d",&ele);
	
	linear(a,n,ele);
}

int linear(int arr[],int size,int ele)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
			printf("The element is found at %dth index and %dth position\n",i,i+1);
			break;
		}
	}
	if(i == size)
	{
		printf("NOT FOUND \n");
	}
}
