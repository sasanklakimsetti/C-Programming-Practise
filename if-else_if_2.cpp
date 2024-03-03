//write a C Program to find the biggest number among 4 numbers
#include<stdio.h>
using namespace std;
main() {
	int a,b,c,d;
	printf("Enter any four numbers: \n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
		{
			if(a>c)
				{
					if(a>d)
						{
							printf("a is big \n");
						}	
					else
						{	
						printf("d is big \n");
						}	
				}
				
			else
			 	{
					if(c>d)
						{
							printf("c is big \n");
						}
					else
						{
							printf("d is big \n");
						}
				}
		}
	else
		{
			if(b>c)
				{	
					if(b>d) 
						{
							printf("b is bid \n");
						}
					else
						{
							printf("d is big \n");
						}
				}
			else
				{
					if(c>d)
						{
							printf("c is big \n");
						}
					else
						{
							printf("d is big \n");
						}
				}
		}
}	
