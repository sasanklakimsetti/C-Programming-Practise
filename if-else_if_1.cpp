//If else if statement
//write a C Program to find the biggest number among three numbers
#include<stdio.h>
using namespace std;
main() {
	int a,b,c;
	printf("Enter any three numbers: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b) {
		if(a>c) {
			printf("a is big \n");
		}
		else{
			printf("c is big \n");
		}
	}
	else {
		if(b>c) {
			printf("b is big \n");
		}
		else{
			printf("c is big \n");
		}
	}
	printf("STOP");
}
