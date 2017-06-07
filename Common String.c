#include<stdio.h>
#include<string.h>

int main()
{
    char a[105],b[105];
    int i,j,T,count,n,m;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        count=0;
        scanf("%s %s",a,b);
        n=strlen(a);
        m=strlen(b);
        if(n>m)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]==b[j])
                    count++;
                else
                    break;
            }
        }
        else
        {
            for(j=0;j<m;j++)
            {
                if(b[j]==a[j])
                    count++;
                else
                    break;
            }
        }
        printf("Case %d: %d\n",i+1,count);
    }
    return 0;
}
