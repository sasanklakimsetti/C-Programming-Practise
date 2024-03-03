#include<stdio.h>
#include<string.h>
int main()
{
char s[20]="MADAM";
int i, j, flag=0;
int l = strlen(s);
for(i =0,j=l-1; i<j; i++, j--)
{
if(s[i]==s[j])
flag =1;
}
if (flag==0)
printf("Not palindrome");
else
printf("palindrome");
}
