#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int t3,tl,sn,n,d,a,i,ans;
        scanf("%lld%lld%lld",&t3,&tl,&sn);
        n=(2*sn)/(t3+tl);
        printf("%lld\n",n);
        d=(t3-tl)/(5-n);
        a=t3-2*d;
        i=0;
        while(n--)
        {
            ans=a+i*d;
            printf("%lld ",ans);
            i++;
        }
        printf("\n");
    }
    return 0;
}
