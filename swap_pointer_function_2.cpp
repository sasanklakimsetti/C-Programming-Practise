#include<stdio.h>
using namespace std;
main()
{
	void swap(int,int);
	int a,b;
	a=7,b=5;
	printf("Before swapping \n A=%d\n B=%d\n",a,b);
	swap(a,b);
	swap(10,20);
}
void swap(int m, int n)
{
	int t;
	t=m;
	m=n;
	n=t;
	printf("After swapping \n A=%d\n B=%d\n",a,b);
}
