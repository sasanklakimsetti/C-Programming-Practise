//string copy

#include<stdio.h>
#include<string.h>
main()
{
	char str2[20],str1[]="Welcome";
	strcpy(str2,str1); //string copy inbuilt function
	printf("%s",str1);
	
	//string copy without inbuilt function
	
	char s1[] = "Stringcopy!!!",s2[100],i;
	
	printf("\nString 1: %s\n",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	
	printf("String 2 : %s",s2);
	return 0;
}
