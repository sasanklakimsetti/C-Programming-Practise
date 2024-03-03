//DANGLING POINTER
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
main()
{
	int *ptr = (int*) malloc(sizeof(int));
	free(ptr);
	printf("Value of ptr is %d",*ptr);
	ptr = NULL;
}
