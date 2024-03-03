#include<stdio.h>
using namespace std;

main()
{
	struct biodata
	{
		char n; //name 
		char fn; //father name 
		char mn; //mother name 
		int a; //age
		int bd; //birthdate
		int bm; //birthmonth
		int by; //by
	};
	
	struct biodata b = {'S','P','M',18,10,12,2004};
	printf("Name is %c \n""Father name is %c \n""Mother name is %c\n" "age is %d\n""Birthdate is %d\n""Birth month is %d\n""Birthyear is %d\n",b.n,b.fn,b.mn,b.a,b.bd,b.bm,b.by);
	
	struct biodata bf;
	fflush(stdin);
	printf("Enter details of your frnd to get his biodata\n");
	scanf("%c %c %c %d %d %d %d",&bf.n,&bf.fn,&bf.mn,&bf.a,&bf.bd,&bf.bm,&bf.by);
	printf("Name is %c \n""Father name is %c \n""Mother name is %c\n" "age is %d\n""Birthdate is %d\n""Birth month is %d\n""Birthyear is %d\n",bf.n,bf.fn,bf.mn,bf.a,bf.bd,bf.bm,bf.by);

	
}
