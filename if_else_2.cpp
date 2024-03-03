#include<stdio.h>
using namespace std;
main() {
	int a,b;
	printf("Enter the value of a : \n");
	scanf("%d",&a);
	printf("Enter the value of b : \n");
	scanf("%d",&b);
	if(a>b) {
		printf("a is big \n");
	}
	else if (a==b){
		printf("Both are same \n");
	}
	else {
		printf("b is big\n");
	}
}
