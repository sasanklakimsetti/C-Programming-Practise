//Write a C Program to merge all programs of while loops using switch case
#include<stdio.h>
using namespace std;
main() 
{
	int opt;
	long int i,sum,n,n1,n2,n3,fact;
	printf("Choose any option \n");
	printf("1 - Sum of first 10 numbers \n");
	printf("2 - Series of odd numbers from 1-100 \n");
	printf("3 - Factorial of a number \n");
	printf("4 - Fibonacci series of a number \n");
	printf("5 - Series of even numbers from 1-100 \n");
	printf("6 - For Exit \n");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			i=1,sum=0;
			while(i<=10) 
			{
				sum+=i;
				i++;
			}
			printf("Sum : %ld",sum);
			break;
		case 2:
			i=1;
			while(i<=100)
			{
				printf("%ld \n",i);
				i=i+2;
			}
			break;
		case 3:
			i=1,fact=1;
			printf("Enter a number: \n");
			scanf("%ld",&n);
			while(i<=n)
			{
				fact*=i;
				i=i+1;
			}
			printf("Factorial is %ld",fact);		
			break;
		case 4:
			n1=0,n2=1;
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
			break;
		case 5:
			i=0;
			while(i<=100)
			{
				printf("%ld \n",i);
				i=i+2;
			}
			break;
		case 6:
			break;
	}
}
