#include<stdio.h>
int main()
{
    int n,i,T;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        if(n>=120)
            printf("Good Boy Sifat\n");
        else
            printf("Naughty Boy Sifat\n");
    }
    return 0;
}
