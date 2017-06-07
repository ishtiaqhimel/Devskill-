#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,T,m;
    scanf("%d",&T);
    char str1[105],str2[105];
    for(j=0;j<T;j++)
    {
        n=0;
        m=0;
        scanf("%s",&str1);
        getchar();
        n=strlen(str1);
        for(i=0;i<n;i++)
        {
            if(isupper(str1[i])!=0)
                str1[i]=tolower(str1[i]);
            else
                str1[i]=str1[i];
        }
        for(i=0;i<n;i++)
        {
            str2[i]=str1[(n-1)-i];
        }
        for(i=0;i<n;i++)
        {
            if(str1[i]!=str2[i])
            {
                m++;
            }
            if(str1[i]==str2[i])
                continue;
        }
        if(m!=0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
