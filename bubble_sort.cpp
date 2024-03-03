//bubble sort

#include<stdio.h>
using namespace std;

main()
{
	int n;
	printf("Size of the array is: ");
	scanf("%d",&n);
	
	int a[n],i,j,temp;
	printf("\nEnter the elements of the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag==0)
		break;
	}
	printf("\nThe array is sorted \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
