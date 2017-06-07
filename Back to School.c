#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,x,y,x1,y1;
    double r,d;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        d=0;
        scanf("%d %d %lf %d %d",&x,&y,&r,&x1,&y1);
        d=sqrt(pow((x-x1),2)+pow((y-y1),2));
        if(d>r)
            printf("Case %d: Outside\n",i);
        else if(d==r)
            printf("Case %d: OnCircle\n",i);
        else if(d<r)
            printf("Case %d: Inside\n",i);
    }
    return 0;
}
