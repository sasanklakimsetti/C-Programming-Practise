//else if 
#include<stdio.h>
using namespace std;
main() {
	int n;
	printf("Enter any number from  1-12 : \n");
	scanf("%d",&n);
	
	if(n==1) {
		printf("The month is January and it has 31 days\n");
	}
	else if(n==2) {
		printf("The month is Febrauary and it has 28 days\n");
	}
	else if (n==3) {
		printf("The month is March and it has 31 days\n");
	}
	else if (n==4){
		printf("The month is April and it has 30 days\n");
	}
	else if (n==5){
		printf("The month is May and it has 31 days\n");
	}
	else if(n==6){
		printf("The month is June and it has 30 days\n");
	}
	else if(n==7) {
		printf("The month is July and it has 31 days\n");
	}
	else if(n==8) {
		printf("The month is August and it has 30 days\n");
	}
	else if (n==9){
		printf("The month is September and it has 31 days\n");
	}
	else if (n==10) {
		printf("The month is October and it has 30 days\n");
	}
	else if(n==11) {
		printf("The month is November and it has 31 days\n");
	}
	else if(n==12) {
		printf("The month is December and it has 31 days\n");
	}
	else{
		printf("Wrong Input");
	}
}
