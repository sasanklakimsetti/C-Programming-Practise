//Logical OR Operator
#include<stdio.h>
using namespace std;
main() {
	int height,age;
	printf("Enter the height of the candidate in centimeters : \n");
	scanf("%d",&height);
	printf("Enter the age of the candidate : \n");
	scanf("%d",&age);
	
	if((height>170)||(age>=21)) {
		printf("The candidate is eligible \n");
	}
	else {
		printf("The candidate is not eligible \n");
	}
}
