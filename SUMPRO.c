#include<stdio.h>
#define mod 1000000007
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,y,sum=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            long long int y=n/i;
            sum=((sum)%mod+(y*i)%mod)%mod;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
