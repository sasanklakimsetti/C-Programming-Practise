//ARRAY INSERTION

#include<stdio.h>
using namespace std;

main()
{
	int stud[60],size,i,pos,val;
	
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	if(size>60)
	{
		printf("Overflow occured\n");
	}
	else
	{
	printf("Enter the elements of the array: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&stud[i]);
	}
	
	printf("The array is \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",stud[i]);
	}
	
	
	printf("\nEnter the position to be inserted : ");
	scanf("%d",&pos);
	
	printf("\nThe value to be inserted in that position : ");
	scanf("%d",&val);
	
	if(pos<=0 || pos>(size+1))
	{
		printf("Invalid position to insert\n");
	}
	else
	{
		for(i=size-1;i>=pos-1;i--)
	{
		stud[i+1] = stud[i];
	}
	stud[pos-1]=val;
	size++;
	
	printf("\nThe array after insertion is : \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",stud[i]);
	}
	}
	}
}
