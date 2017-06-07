#include<stdio.h>
#include<string.h>
int main()
{
    char num[13];
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    scanf("%s",num);
    if(num[0]!='8')
    {
        if(num[2]=='1')
            printf("88%s Citycell\n",num);
        else if(num[2]=='5')
            printf("88%s Teletalk\n",num);
        else if(num[2]=='6')
            printf("88%s Airtel\n",num);
        else if(num[2]=='7')
            printf("88%s Grameenphone\n",num);
        else if(num[2]=='8')
            printf("88%s Robi\n",num);
        else if(num[2]=='9')
            printf("88%s Banglalink\n",num);
    }
    else
    {
        if(num[4]=='1')
            printf("%s Citycell\n",num);
        else if(num[4]=='5')
            printf("%s Teletalk\n",num);
        else if(num[4]=='6')
            printf("%s Airtel\n",num);
        else if(num[4]=='7')
            printf("%s Grameenphone\n",num);
        else if(num[4]=='8')
            printf("%s Robi\n",num);
        else if(num[4]=='9')
            printf("%s Banglalink\n",num);
    }
    }
    return 0;
}
