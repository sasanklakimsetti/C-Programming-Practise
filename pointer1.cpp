//POINTER
#include<stdio.h>
using namespace std;
main()
{
	int a,*p;
	printf("Enter a number : \n");
	scanf("%d",&a);
	
	p = &a;
	printf("%d \n",a);
	printf("%d \n",p);
	printf("%d \n",*p);
	printf("%d \n",&p);
	
	int **k;
	k = &p;
	printf("%d \n",k);
	printf("%d \n",*k);
	printf("%d \n",**k);
	printf("%d \n",&k);
}
