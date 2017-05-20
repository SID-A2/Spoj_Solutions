#include<stdio.h>
#define ll long long
ll int gcd(ll int a,ll int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    ll int t;
    scanf("%lld",&t);
    ll int n,m,i;
    while(t--)
    {
        scanf("%lld",&n);
        m=n/2;
        if(n==1)
            printf("0");
        else{
        for(i=m;i>=1;i--)
        {
            if(gcd(n,i)==1)
            {
                printf("%lld\n",i);
                break;
            }
        }
        }
    }
    return 0;
}
