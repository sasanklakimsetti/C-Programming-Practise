#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,sum_1=0,sum2=0,diff;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           sum_1 = sum_1 + a[[i][j]+4];
        }
    }
    printf("%d",sum_1);
}
