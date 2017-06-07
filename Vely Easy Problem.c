#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,x;
    char str[55];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        x=1;
        scanf("%s",str);
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]=='r')
            {
                x=0;
            }
            else
                continue;
        }
        if(x==0)
            printf("Not vely easy\n");
        else
            printf("Vely easy\n");
    }
    return 0;
}
