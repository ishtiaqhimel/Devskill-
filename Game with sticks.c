#include<stdio.h>
int main()
{
    int m,n,t;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(n<m)
        {
            m=n;
        }
        if(m%2==0)
        {
            printf("Malvika\n");
        }
        else
        {
            printf("Akshat\n");
        }
    }
    return 0;
}
