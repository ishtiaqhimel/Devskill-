#include<stdio.h>
int main()
{
    int v1,v2,d,t,T,i,d1,d2;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d %d",&v1,&v2,&d,&t);
        d1=v1*t;
        d2=(v2*t)+d;
        if(d2<d1 || (d==0 && t>0))
             printf("Case %d: Abir will be arrested\n",i);
        else
            printf("Case %d: Abir will survive\n",i);

    }
    return 0;
}
