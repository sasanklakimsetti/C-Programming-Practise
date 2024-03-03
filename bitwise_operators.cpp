//BITWISE OPERATORS
#include<stdio.h>
using  namespace std;
main() {
	unsigned int a = 60;
	unsigned int b = 13;
	int c=0;
	c = a & b; //Bitwise AND Operator
	printf("Line 1 - value of c is %d \n",c);
	c = a|b; //Bitwise OR Operator
	printf("Line 2 - value of c is %d \n",c);
	c = a^b; //Bitwise XOR Operator
	printf("Line 3 - value of c is %d \n",c);
	c = ~a; //Bitwise NOT Operator
	printf("Line 4 - value of c is %d \n",c);
	c = a<<2; //Bitwise Left Shift Operator
	printf("Line 5 - value of c is %d \n",c);
	c = a>>2; //Bitwise Right Shift Operator
	printf("Line 6 - value of c is %d \n",c);
}
