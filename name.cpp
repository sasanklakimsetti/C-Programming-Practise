#include<stdio.h>
using namespace std;

main()
{
	int n;
	printf("Enter the no.of characters: ");
	scanf("%d",&n);
	char r[n],i;
	printf("Enter your name \n");
	for(i=0;i<(n+1);i++)
	{
		scanf("%c",&r[i]);
	}
	
	printf("Your name is : ");
	for(i=0;i<(n+1);i++)
	{
		printf("%c",r[i]);
	}
}
