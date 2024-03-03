//write a C Program to find the sum of numbers from 1-10
#include<stdio.h>
using namespace std;
main() {
	int i,sum;
	sum=0;
	for(i=1;i<=10;i++) {
		sum+=i;
	}
	printf("%d \n",sum);
	printf("end");
}
