#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        double n;
        scanf("%lf",&n);

        double ans;
        ans=1-(1/(3*sqrt(n/2)));
        printf("%0.6lf\n",ans);
    }
    return 0;
}
