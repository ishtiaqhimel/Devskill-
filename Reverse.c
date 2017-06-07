#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,T;
    scanf("%d",&T);
    getchar();
    char str1[1005],str2[1005];
    for(j=0;j<T;j++)
    {
        n=0;
        scanf("%[^\n]",str1);
        getchar();
        n=strlen(str1);
        for(i=0;str1[i]!='\0';i++)
        {
            str2[i]=str1[(n-1)-i];
        }
        str2[i]='\0';
        printf("%s\n",str2);
    }
    return 0;
}
