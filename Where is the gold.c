#include<stdio.h>
int main()
{
    int i,T,r,c,j,x,m;
    char ara[101][101];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        m=0;
        scanf("%d %d",&r,&c);
        getchar();
        for(j=0;j<r;j++)
        {
            for(x=0;x<c;x++)
            {
                scanf("%c",&ara[j][x]);
            }
            getchar();
        }
        printf("Case %d:\n",i);
        for(j=0;j<r;j++)
        {
            for(x=0;x<c;x++)
            {
                if(ara[j][x]=='$')
                {
                    printf("%d,%d\n",j+1,x+1);
                    m++;
                }
            }
        }
        if(m==0)
            printf("No Gold Found\n");
    }
    return 0;
}
