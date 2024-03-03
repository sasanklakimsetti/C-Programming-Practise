//write a C program to find the sum of first 10 numbers using while loop
#include<stdio.h>
using namespace std;
main() 
{
	int i=1,sum=0;
	while(i<=10) 
	{
		sum+=i;
		i++;
	}
	printf("Sum : %d",sum);
}
