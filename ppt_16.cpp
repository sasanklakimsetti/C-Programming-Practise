#include<stdio.h>
using namespace std;
int main()
{
    int i = 0;
    while (i < 10)
    {
        i++;
        printf("hi\n");
        while (i < 8) 
        {
            i++;
            printf("hello\n");
        }
    }
}

