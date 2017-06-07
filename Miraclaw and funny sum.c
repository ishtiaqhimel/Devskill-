#include<stdio.h>
int main()
{
    int i,T,n,c,j,t;
    long long a,b;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        a=0,b=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&c);

            a+=c;
            t=c-j;

            if(t>=0)
                b+=t;
        }
        printf("%lld\n",a-b);
    }
    return 0;
}
