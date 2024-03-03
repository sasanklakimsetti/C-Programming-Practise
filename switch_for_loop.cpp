//Write a C program to merge all programs of for loop using switch case
#include<stdio.h>
using namespace std;
main() 
{
	int opt,sum,n1=0,n2=1,n3;
	long int i,n,fact=1;
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
			sum=0;
			for(i=1;i<=10;i++)
			{
			sum+=i;
			}
		printf("%d \n",sum);
		printf("end");
		break;
		
		case 2:
			for(i=1;i<100;i=i+2)
			{
				printf("%ld \n",i);
			}
			break;
		case 3:
			printf("Enter a number: \n");
			scanf("%ld",&n);
			for (i=1;i<=n;i++)
			{
				fact*=i;
			}
			printf("Factorial is %ld \n",fact);
			break;
		case 4:
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
			break;
		case 5:
			for(i=0;i<=100;i=i+2)
			{
				printf("%d\n",i);
			}
			break;
		case 6:
			break;
	}
}
