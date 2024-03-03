#include<stdio.h>
using namespace std;

main()
{
	struct student 
	{
		int r ;
		float p;
		char n;
	};
	
	int a ;
	struct student s = {1,2.2,'R'};
	struct student r;
	printf("Roll no = %d\n",s.r);
	printf("per no = %f \n",s.p);
	printf("name = %c\n",s.n);
	
	printf("Enter roll no,percentage\n");
	scanf("%d %f",&r.r,&r.p);
	fflush(stdin);
	printf("Enter name \n");
	scanf("%c",&r.n);
	printf("Roll no = %d \n" "Percentage = %f \n" "name is %c \n",r.r,r.p,r.n);
}
