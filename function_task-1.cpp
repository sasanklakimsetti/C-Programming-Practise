//sum,sub,multi
#include<stdio.h>
using namespace std;
main()
{
	int sum(int,int);
	int sub(int,int);
	int multi(int,int);
	
	int a,b,c,d,e;
	printf("Enter any two numbers : \n");
	scanf("%d %d",&a,&b);
	
	printf("Sum of the numbers \n");
	sum(a,b);
	
	printf("Difference of two numbers\n");
	sub(a,b);
	
	printf("Product of two numbers \n");
	multi(a,b);
}

int sum(int m,int n)
{
	int o;
	o=m+n;
	printf("%d \n",o);
}
int sub(int m , int n)
{
	int o ;
	o = m - n;
	printf("%d \n",o);
}

int multi(int m , int n)
{
	int o ;
	o = m * n;
	printf("%d \n",o);
}
