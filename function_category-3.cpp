//functions category-3 Yes Return Yes Argument
#include<stdio.h>
using namespace std;
main() 
{
	int sub(int,int);
	int a,b,c;
	printf("Enter any two numbers: \n");
	scanf("%d%d",&a,&b);
	c = sub(a,b);
	printf("sub = %d \n",c);
	c = sub(20,10);
	printf("Sub = %d \n",c);
}
int sub(int m , int n)
{
	int o;
	o=m-n;
	return o;
}
