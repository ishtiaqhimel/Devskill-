#include<stdio.h>
int main()
{
    int i,T;
    long x,j,n,sum;
    scanf("%d",&T);
    while(T--)
    {
        sum=0,x=0;
        scanf("%ld",&n);
        for(j=1;sum<n;j++)
        {
            sum+=j;
            x++;
        }
        printf("%ld\n",x);
    }
    return 0;
}
