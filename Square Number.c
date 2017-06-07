#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&a);
        n=sqrt(a+0.0001);
        if(n*n==a)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
