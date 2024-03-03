//string conversion
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{	
	//float conversion
	char str[20]="99.9",str1[20]="99.9";
	float d;
	d = atof(str);
	printf("%f",d);
	//integer conversion
	long int i;
	i = atol(str1);
	printf("%ld",i);
}
