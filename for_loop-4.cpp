//write a C program to find the series of odd numbers from 1-100
#include<stdio.h>
using namespace std;
main() 
{
	long int i;
	for(i=1;i<100;i=i+2)
	{
		printf("%ld \n",i);
	}
}
