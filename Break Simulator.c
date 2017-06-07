#include<stdio.h>
int main()
{
    int T;
    double v,t,n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf %lf",&v,&t);

        n=-(v/t);

        printf("%.2lf\n",n);
    }
    return 0;
}
