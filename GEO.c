#include<stdio.h>
#define ll long long
ll int abs(ll int x)
{
    if(x>=0)
        return x;
    else
        x=x*(-1);
        return x;
}
int main()
{
    ll int t;
    scanf("%lld",&t);
    while(t--)
    {
        ll int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        a=c/a;
        a=abs(a);
        b=c/b;
        b=abs(b);
        ll int ans=(a*b)/2;
        printf("%lld\n",ans);
    }
    return 0;
}
