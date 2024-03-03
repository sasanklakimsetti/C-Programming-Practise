/*write a c program to  find the area of circle */
#include<stdio.h>
using namespace std;
main() {
	float r,pi,area;
	pi=3.14;
	printf("Enter radius of the circle : \n");
	scanf("%f",&r);
	area = 3.14 * r * r;
	printf("The area of the circle is %f",area);
	return 0;
}
