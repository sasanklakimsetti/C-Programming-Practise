/*Write a code to reverse the three digit number using airthmetic operators*/
#include<stdio.h>
using namespace std;
main() {
	int n,a1,a2,a3,sum,rev,t;
	printf("Enter a three digit number: \n");
	scanf("%d",&n);
	t=n;
	a1=t%10;
	t=t/10;
	a2=t%10;
	a3=t/10;
	sum=a1+a2+a3;
	rev = a1*100+a2*10+a3;
	
	printf("The number is %d\n",n);
	printf("The sum of the digits of the number is %d\n",sum);
	printf("The reverse of the number is %d\n",rev);
	return 0;
}
