//Write a C Program to find the fibonacci series of a number using while loop
#include<stdio.h>
using namespace std;
main() 
{
	long int i,n1=0,n2=1,n3,sum;
	printf("Enter a number : \n");
	scanf("%ld",&n3);
	while(i<n3)
	{
		sum=n1+n2;
		n1=n2;
		n2=sum;
		printf("%ld \n",sum);
		i++;
	}
}
