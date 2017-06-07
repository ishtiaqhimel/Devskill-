#include<stdio.h>
#include<math.h>
main()
{
    int T,i;
    double a,b,c,AD;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        AD=0;
        scanf("%lf %lf %lf",&a,&b,&c);
        AD=sqrt((a*a)+(b*b)+(c*c));
        printf("%.2lf\n",AD);
    }
    return 0;
}
