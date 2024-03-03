//If the radius of car wheel is 15inch then what will the diameter and calculate distance traveled after one rotation of that wheel?
#include<stdio.h>
using namespace std;
main()
{
	int r,d;
	float pi = 3.14,di;
	printf("Enter radius : \n");
	scanf("%d",&r);
	d = 2 * r;
	printf("Diameter of tyre is %d\n",d);
	
	di = pi * d;
	printf("Distance after one rotation is %f",di);
}
