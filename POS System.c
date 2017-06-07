#include<stdio.h>
int main()
{
    int T,n,N,i;
    double v,q;
    long m,r;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        q=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%lf %d",&v,&N);
            q+=v*N;
        }
        scanf("%ld",&m);
        r=m-q;
        printf("Case %d: %ld\n",i,r);
    }
    return 0;
}
