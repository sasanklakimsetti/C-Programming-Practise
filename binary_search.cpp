//binary search

#include<stdio.h>
using namespace std;

int BinarySearch(int a[],int n,int data);

main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n],i;
	printf("\nElements of the array are: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	int data;
	printf("The data to be searched: ");
	scanf("%d",&data);
	
	return BinarySearch(a,n,data);
}

int BinarySearch(int a[],int n,int data)
{
	int l=0,r=n-1;
	while(l<r)
	{
	
	int mid = (l+r)/2;
	
	if(data==a[mid])
	return mid;
	else if(data<a[mid])
	r=mid-1;
	else
	l=mid+1;
	}
	return -1;
}
