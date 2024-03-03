//Merge two sorted arrays

#include<stdio.h>
using namespace std;

main()
{
	int n1,n2,i,j,a[n1],b[n2],temp;
	printf("Enter numbers of elements in first array: \n");
	scanf("%d",&n1);
	printf("Enter the elements: \n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe 1st array is :");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the numbers of elements in the second array: \n");
	scanf("%d",&n2);
	printf("Enter the elements: \n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nThe 2nd array is :");
	for(i=0;i<n2;i++)
	{
		printf("%d\t",b[i]);
	}
	
	for(i=0;i<(n1-1);i++)
	{
		int flag=0;
		for(j=0;j<(n1-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	printf("\nThe first array after sorting: \n");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<(n2-1);i++)
	{
		int flag=0;
		for(j=0;j<(n2-1);j++)
		{
			if(b[j]>b[j+1])
			{
				temp = b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	printf("\nThe second array after sorting is: \n");
	for(i=0;i<n2;i++)
	{
		printf("%d\t",b[i]);
	}
	
	int c[n1+n2];
	c[n1+n2]=a[n1]+b[n2];
	for(i=0;i<(n1+n2);i++)
	{
		printf("\n%d\t",c[i]);
	}
	
}
