//concatenate two strings

#include<stdio.h>
#include<string.h>
using namespace std;

main()
{
	char fname[50] = "Sasank";
	char lname[50] = "Lakimsetti";
	
	strcat(fname,lname);
	printf("%s",fname);
	
	
	char mystring[] = "MADAM";
	if(strcmp(mystring,strrev(mystring))==0)
	{
		printf("\n The string is a palindrome");
	}
	else
	printf("\nThe string is not a palindrome");
	
}
