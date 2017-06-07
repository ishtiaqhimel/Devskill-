#include<stdio.h>
#include<math.h>
int main()
{
    int i,T,D,R;
    double r,a;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lf %lf",&r,&a);

        D=sqrt(2*pow(r,2));
        R=a;

        if(D==R)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
