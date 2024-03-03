/*write the code to find the area of the triangle*/
#include<stdio.h>
using namespace std;
main() {
	float area,b,h;
	printf("Enter base of the triangle : \n");
	scanf("%f",&b);
	printf("Enter height of the triangle : \n");
	scanf("%f",&h);
	area = 0.5 * b * h;
	printf("The area of the triangle is %f",area);
	return 0;
}
