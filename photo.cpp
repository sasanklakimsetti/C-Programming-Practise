#include<stdio.h>
using namespace std;
main() 
{
	long int n,i,l,w,h;
	printf("Enter number of photos : \n");
	scanf("%ld",&n);
	printf("Enter length of the photo : \n");
	scanf("%ld",&l);
	for(i=0;i<=n;i++)
	{
		scanf("%ld %ld",&w,&h);
		if(w<l||h<l)
		{
			printf("Upload Another \n");
		}
		else if (w==h)
		{
			printf("Accepted \n");
		}
		else
		{
			printf("Crop \n");
		}
		return 0;
	}
}
