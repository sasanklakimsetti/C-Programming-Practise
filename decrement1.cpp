/*decrement operators*/
#include<stdio.h>
using namespace std;
main() {
	int a ;
	printf("enter a: \n");
	scanf("%d",&a);
	printf("the value of a is %d \n",a);
	printf("the prefix decrement value of a is %d\n",--a);
	printf("the value of a is %d\n",a);
	printf("the postfix decrement value of a is %d\n",a--);
	printf("The value of a is %d\n",a);
}
