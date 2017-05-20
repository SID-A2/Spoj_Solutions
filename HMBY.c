#include<stdio.h>
#define ll long long
int main()
{
    ll int a,b,c,d,e,w;
    scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&w);
    d=d+2*e;
    c=c+2*d;
    b=b+2*c;
    a=a+2*b;
    if( 2*a>=w && w%2==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
