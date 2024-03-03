//swapping number using pointer
#include<stdio.h>
using namespace std;
main()
{
	int a , b,  *m,*n,t;
	a=7,b=8;
	m=&a;
	n=&b;
	t=*m;
	*m=*n;
	*n=t;
	printf("After swapping : \n A=%d \n B=%d",a,b);
}
