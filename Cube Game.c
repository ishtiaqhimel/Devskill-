#include<stdio.h>
int main()
{
    int i,p,b,s,g,r,sum,high[55],a=-10000;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        sum=0;
        scanf("%d %d %d %d",&b,&s,&g,&r);
        sum=b+(s*3)+(g*10)-(r*5);
        if(sum>=0)
            printf("Player %d: %d\n",i,sum);
        else
        {
            printf("player %d: 0\n",i);
        }
        high[i]=sum;
    }
    for(i=1;i<=p;i++)
    {
        if(a<high[i])
            a=high[i];
    }
    printf("High Score = %d\n",a);
    return 0;
}
