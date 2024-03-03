#include<stdio.h>
using namespace std;
main()
{
	int fact(int);
	int f,a;
	scanf("%d",&a);
	f = fact(a);
	printf("Factorial = %d \n",f);
}
 int fact(int m)
{
	if(m==1)
	{
		return 1;
	}
	else{
		return(m*fact(m-1));
	}
}
