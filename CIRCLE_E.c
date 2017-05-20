#include<stdio.h>
#include<math.h>
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double r1,r2,r3;
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        r1=1/r1;r2=1/r2;r3=1/r3;
        double ans;
        ans=(r1+r2+r3+ (2*sqrt(r1*r2+r2*r3+r3*r1)));
        ans=1/ans;
        printf("%0.6lf\n",ans);
    }
    return 0;
}
