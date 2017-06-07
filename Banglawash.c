#include<stdio.h>
int main()
{
    int a,b,c,d,e,T,i,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        e=0;
        for(j=0;j<2;j++)
        {
            scanf("%d %d %d %d",&a,&b,&c,&d);
            if(a+b>c+d)
                e++;
        }
        if(e==2)
            printf("Banglawash\n");
        else
            printf("Miss\n");
    }
    return 0;
}
