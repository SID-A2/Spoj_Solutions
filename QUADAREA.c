#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    double a,b,c,d;
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        double s=(a+b+c+d)/2.0;
        double ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",ans);
    }
    return 0;
}
