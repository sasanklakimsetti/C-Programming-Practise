#include<stdio.h>
using namespace std;
main() {
	int height,age;
	printf("Enter height of the candidate in centimeters : \n");
	scanf("%d",&height);
	printf("Enter age of the candidate : \n");
	scanf("%d",&age);
	
	if ((height> 172)&&(age>21) ) {
		printf("The candidate is eligible \n");
	}
	else {
		printf("The candidate is not eligible \n");
	}
	return 0;
}
