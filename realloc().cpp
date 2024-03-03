//realloc()

#include<stdio.h>
#include<stdlib.h>

using namespace std;

main()
{
	int *ptr,i,n1,n2;
	printf("Enter the size: \n");
	scanf("%d",&n1);
	
	ptr = (int*)malloc(n1*sizeof(int));
	
	printf("Address of previously allocated memory: \n");
	for(i=0;i<n1;i++)
	{
		printf("%pc\n",(ptr+i));
	}
	
	printf("Enter new size: \n");
	scanf("%d",&n2);
	
	ptr = (int*)realloc(ptr,n2*sizeof(int));
	
	printf("\nAddresses of newly allocated memory: \n");
	for(i=0;i<n2;++i)
	{
		printf("%pc\n",(ptr+i));
	}
	free(ptr);
	return 0;
}
