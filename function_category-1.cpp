//Functions Category-1 : No Return No Argument
#include<stdio.h>
using namespace std;
main() 
{
	void display(void); //function declaration
	printf("Start \n");
	display(); //function calling
	printf("Outside Function \n");
	display(); //function calling
	printf("Stop");
}
void display(void)
{
	printf("Inside Function \n");
}
