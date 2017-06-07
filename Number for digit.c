#include<stdio.h>
#include<string.h>
int main()
{
    char ara[5];
    int i,T,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%s",ara);
        getchar();
        n=strlen(ara);
        printf("%d\n",n);
    }
    return 0;
}
