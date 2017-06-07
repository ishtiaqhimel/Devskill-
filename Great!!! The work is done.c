#include<stdio.h>
int main()
{
    int H,n,i,h,e,d;
    while (scanf("%d %d",&H,&n)==2)
    {
        e=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&h);
            e+=h;
        }
        d=0;
         if(H%e==0)
            d=H/e;
        else
            d=(H/e)+1;
        if(d==1)
            printf("Project will finish within 1 day.\n");
        else
            printf("Project will finish within %d days.\n",d);
    }
    return 0;
}
