#include<stdio.h>
int main()
{
    int i,T;
    long long n,sum;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        sum=0;
        scanf("%lld",&n);
        sum=n*(n+1)/2;
        printf("%lld\n",sum);
    }
    return 0;
}
