//write a C program to find the factorial of a number using while loop
#include<stdio.h>
using namespace std;
main()
{
	long int n,i=1,fact=1;
	printf("Enter a number: \n");
	scanf("%ld",&n);
	while(i<=n)
	{
		fact*=i;
		i=i+1;
	}
	printf("Factorial is %d",fact);
}
