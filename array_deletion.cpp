//array deletion

#include<stdio.h>
using namespace std;

main()
{
	int a[60],size,i,pos;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	
	printf("Enter the elements of the array: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nThe value of which position to be deleted: ");
	scanf("%d",&pos);
	
	if(pos<=0 || pos>size)
	{
		printf("\nNo position exists");
	}
	else
	{
		for(i=(pos-1);i<(size-1);i++)
		{
			a[i] = a[i+1];
		}
		size--;
	}
	printf("\nThe array after deletion is :");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
