/*Write a C program to find the final price of the shopping from a mall including GST*/
#include<stdio.h>
using namespace std;
main() {
	float sp,tp,fp,gst,gst_s,gst_t;
	printf("Price of shirt is Rs.");
	scanf("%f",&sp);
	printf("Price of trouser is Rs.");
	scanf("%f",&tp);
	gst = 0.12;
	gst_s=sp+(gst*sp);
	gst_t=tp+(gst*tp);
	fp = gst_s + gst_t;
	printf("Final Price is Rs.%f",fp);
	return 0;
}
