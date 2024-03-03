/*user will enter a number and program will display that whether the given number is even or odd*/
#include<stdio.h>
using namespace std;
main() {
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	if (n%2==0) {
		printf("The number %d is even \n",n);
	}
	else{
		printf("the number %d is odd \n",n);
	}
	return 0;
}
