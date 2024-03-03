#include<stdio.h>
using namespace std;
main() {
   int x = 3, y, z;
   y = x++;
   z = ++x;
   printf(“\n %d,%d,%d”,x,y,z);
   return 0;
}

