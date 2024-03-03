//swapping using function and pointer
#include<stdio.h>
using namespace std;
main()
{
	void swap(**int , *int);
	int a=5,b=7;
	printf("Before swapping \n A = %d \n B = %d",a,b);
	printf("After swapping \n A=%d \n B=%d",a,b);
	swap(&a,&b);
	printf("A = %d \n",a);
	printf("B = %d \n",b);
}
void swap(int *m,int *n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
}

