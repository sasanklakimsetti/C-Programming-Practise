//UNION
#include<stdio.h>
using namespace std;

union stu
{
	int r;
	float p;
	char n;
};
	
main()
{
	union stu u1;
	u1.r = 17;
	u1.p = 2.2;
	u1.n = 'S';
	
	printf("%d\n",u1.r);
	printf("%f\n",u1.p);
	printf("%c \n",u1.n);
}
