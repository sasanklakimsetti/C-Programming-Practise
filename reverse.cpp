/*Enter a integer input of 4 digits and add the digits of the input and reverse the number using Arithmetic Operator*/
#include<stdio.h>
using namespace std;
main() {
	int n,a1,a2,a3,a4,sum,rev,t;
	printf("enter any number: \n");
	scanf("%d",&n);
	t=n;
	a1=t%10;
	t=t/10;
	a2=t%10;
	t=t/10;
	a3=t%10;
	a4=t/10;
	
	sum=a1+a2+a3+a4;
	rev=a1*1000+a2*100+a3*10+a4;
	printf("The number is %d \n",n);
	printf("The sum is %d \n",sum);
	printf("The reverse of the number is %d \n",rev);
	return 0;
}
