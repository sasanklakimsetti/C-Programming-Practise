//Write a C Program to find the day by number using switch case
#include<stdio.h>
using namespace std;
main()
{
	int day;
	printf("Enter a number in the range 1-7 : \n");
	scanf("%d",&day);
	
	switch(day) {
		case 1: printf("The day is Sunday\n");
		break;
		case 2: printf("The day is Monday\n");
		break;
		case 3: printf("The day is Tuesday\n");
		break;
		case 4: printf("The day is Wednesday\n");
		break;
		case 5: printf("The day is Thursday\n");
		break;
		case 6: printf("The day is Friday\n");
		break;
		case 7: printf("The day is Saturday\n");
		break;
		default:printf("No day exists \n");
	}
	
}
