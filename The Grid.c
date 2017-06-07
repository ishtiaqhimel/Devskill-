#include<stdio.h>
int main()
{
    int x,x1,y,y1,i,T,d,d1,r;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d %d",&x,&y,&x1,&y1);
        d=(x<x1)?(x1-x):(x-x1);
        d1=(y<y1)?(y1-y):(y-y1);
        r=d+d1;
        printf("Case %d: %d\n",i,r);
    }
    return 0;
}
