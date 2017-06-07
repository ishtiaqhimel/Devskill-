#include<stdio.h>
#include<string.h>
int main()
{
    int T,n,m;
    char a[5],b[4],c[6];
    scanf("%d",&T);
    while(T--)
    {
        m=0;
        scanf("%s %s %s %d",a,b,c,&n);
        if(a[4]=='a')
        {
            m=n-650;
            printf("Shuvo nobo borsho %d\n",m);
        }
        if(a[4]=='o')
        {
            m=n+650;
            printf("Shuva naya barsha %d\n",m);
        }
    }
    return 0;
}
