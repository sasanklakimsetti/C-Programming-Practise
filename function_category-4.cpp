//function category-4 Yes return no argument
#include<stdio.h>
using namespace std;
main()
{
	int multi(void);
	printf("Start \n");
	int c;
	c = multi();
	printf("Multi = %d \n",c);
}
int multi(void)
{
	int m,n,o;
	printf("Enter any two numbers : \n");
	scanf("%d%d",&m,&n);
	o=m*n;
	return o;
}
