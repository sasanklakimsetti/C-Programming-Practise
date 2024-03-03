//write a C Program to find the biggest number among  three numbers using Logical operators
#include<stdio.h>
using namespace std;
main() {
	int a,b,c;
	printf("enter any three numbers : \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a>b)&&(a>c))
		{
			printf("a is big \n");
		}
	else if((b>a)&&(b>c))
		{
			printf("b is big \n");
		}
	else 
		{
			printf("c is big \n");
		}
}
