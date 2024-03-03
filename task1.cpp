#include<stdio.h>
using namespace std;
/*Ask the user to give an integer,float,character input and print the given inputs*/
main() {
	int a;
	printf("enter an integer: \n");
	scanf("%d",&a);
	float b;
	printf("enter any float value: \n");
	scanf("%f",&b);
	char c;
	printf("Enter any character: \n");
	fflush(stdin);  /*spl function in dev c++ compiler to get character output*/
	scanf("%c",&c);
	
	printf("the integer is %d \n",a);
	printf("The float value is %f \n",b);
	printf("The character is %c \n",c);
	return 0;	
}
