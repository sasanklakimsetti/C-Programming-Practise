//Write a C Program to find the fibonacci series of a number using for loop
#include<stdio.h>
using namespace std;
main() {
	int i,sum,n3;
	int n1=0,n2=1;
	printf("enter a number : \n");
	scanf("%d",&n3);
	for(i=0;i<n3;i++)
	{
		sum=n1+n2;
		n1=n2;
		n2=sum;
		printf("%d \n",sum);
	}
	printf("End");
}
