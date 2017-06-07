#include<stdio.h>
int main()
{
    int n,i,T,sum,a,b,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        sum=0;
        a=1;
        b=3;
        scanf("%d",&n);
        if(n==1)
        {
            printf("%d\n",a);
        }
        if(n==2)
        {
            printf("%d\n",b);
        }
        if(n>=3)
        {
        for(j=2;j<n;j++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("%d\n",sum);
        }
    }
    return 0;
}
