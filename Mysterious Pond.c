#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,T,r,n,m,t;
    char name[55],N[55],M[55];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        n=-1;
        m=1000001;
        scanf("%d",&r);
        for(j=1;j<=r;j++)
        {
            scanf("%s %d\n",name,&t);
            if(n<t)
            {
                n=t;
                strcpy(N,name);
            }
            if(m>t)
            {
                m=t;
                strcpy(M,name);
            }
        }
        printf("%s %s\n",N,M);
    }
    return 0;
}
