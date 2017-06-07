#include<stdio.h>
int main()
{
    int i,T;
    long long n,a,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a);
        }
            if(n==1)
                printf("Case %d: %lld\n",i,a);
            else
                printf("Case %d: 0\n",i);
    }
    return 0;
}
