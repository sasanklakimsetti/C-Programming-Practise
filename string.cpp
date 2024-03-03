#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
main()
{
	char fname[20];
	printf("Enter fname: ");
	gets(fname);
	printf("%s",fname);
	char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", strlen(alphabet));
	printf("%d",sizeof(alphabet));
	
	char str2[20],str1[]="Welcome";
	strcpy(str2,str1);
	printf("%s",str2);
	
	char name[50];
	int counter,i;
	printf("\nEnter your name: ");
	gets(name);
	
	
	
	char s1[] = "Hello";
	char s2[] = "Hello";
	char s3[] = "Humble";
	
	printf("\n%d",strcmp(s1,s2));
	printf("\n%d",strcmp(s2,s3));
	printf("\n%d",strcmp(s3,s1));
	char ns1[100],ns2[100];
	printf("\nEnter the first string:");
	gets(ns1);
	printf("\nEnter the second string: ");
	gets(ns2);
	compare(ns1,ns2);
	if(flag==0)
	printf("\nBoth are same");
	else
	printf("\nBoth are not same");

}
//comparing both the strings
	int compare(char a[],char b[])
	{
		int flag = 0,i=0;
		while (a[i]!='\0' && b[i]!='\0')
		{
			if(a[i]!=b[i])
			{
				flag = 1;
				break;
			}
			i++;
		}
		if(flag==0)
		{
			return 0;
		}
		else 
		return 1;
	}

