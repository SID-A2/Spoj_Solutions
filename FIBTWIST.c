#include<stdio.h>
#define ll long long
long long int fib(ll int n,ll int m)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return (fib(n-1,m)%m + fib(n-2,m)%m + (n-1)%m)%m;
}
int main()
{
    ll int t,n,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        ll int a=fib(n,m);
        a=a%m;
        printf("%lld\n",a);
    }
    return 0;
}
