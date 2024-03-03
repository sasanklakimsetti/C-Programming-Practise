//write a C program to find the biggest number among 4 number using logical operators
#include<stdio.h>
using namespace std;
main() {
	int a,b,d,c;
	printf("Enter any four numbers: \n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if((a>b)&&(a>c)&&(a>d)) {
		printf("a is big \n");
	}
	else if ((b>a)&&(b>c)&&(b>d)){
		printf("b is big \n");
	}
	else if((c>a)&&(c>b)&&(c>d)){
		printf("c is big \n");
	}
	else {
		printf("d is big \n");
	}
}
