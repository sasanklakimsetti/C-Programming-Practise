//VOID POINTER

#include<stdio.h>
using namespace std;
main()
{
	void *ptr = NULL;
	int x = 5;
	ptr = &x;
	printf("Value of *ptr is %d",*(int *)ptr);
}
