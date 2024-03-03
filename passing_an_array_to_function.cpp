//avg using passing an  array to a function
#include<stdio.h>
using namespace std;
main()
{
	double avg(int arr[],int size);
		int n;
		printf("Enter the size of the array \n");
		int a[n],i,sum=0;
		printf("Enter the elements in the array \n");
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
		double av =  avg( a, n);
		double avg1;
		printf("Average of elements in the array is %f",av);
}
double avg(int arr[],int size)
		{
		for(int i=0;i<size;i++)
		{
		int sum = 0;
			 sum = sum +  arr[i];
		}
		double avg1 = sum/size ;
		return avg1;

		}
