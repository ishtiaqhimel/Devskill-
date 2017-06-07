#include<stdio.h>
#include<math.h>

int main()
{
    int i,T,n,r,j,m;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        m=0;
        scanf("%d",&n);
        if(n==2)
            printf("Yes\n");
        else if(n==0 || n==1)
            printf("No\n");
        else
        {
            for(j=2;j<=sqrt(n);j++)
            {
                r=n%j;
                if(r==0)
                    m++;
                else
                    continue;
            }
            if(m==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
