#include<stdio.h>
#include<math.h>
int main()
{
    int n,T,i;
    long sum;
    float j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        sum=0;
        scanf("%d",&n);
        j=(n*(n+1))/2;
        sum=pow(j,2.000000000001);
        printf("Case %d: %ld\n",i,sum);
    }
    return 0;
}
