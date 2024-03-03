//Write a C Program to find the factorial of the user input using for loop
#include<stdio.h>
using namespace std;
main()
{
	long int i,fact=1,n;
	printf("Enter a number: \n");
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial : %ld \n",fact);
}
