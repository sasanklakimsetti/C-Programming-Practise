//Functions Category 2 : No Return Yes Argument
#include<stdio.h>
using namespace std;
main() 
{
	void sum(int,int); // function declaration
	int a,b;
	printf("Enter any two numbers : \n");
	scanf("%d%d",&a,&b);
	sum(a,b); //calling
	printf("Stop \n");
	sum(10,20); //calling
}
void sum(int m, int n)
{
	int o;
	o=m+n;
	printf("Sum = %d \n",o);
}
