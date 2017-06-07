#include<stdio.h>
#include<string.h>
int main()
{
    long long n,i,T;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&n);
        n=n*3;
        if(n%2==0)
            printf("Case #%lld: %lld %lld %lld\n",i,n,n-1,n-2);
        else
            printf("Case #%lld: %lld %lld %lld\n",i,n-2,n-1,n);
    }
        return 0;
}
