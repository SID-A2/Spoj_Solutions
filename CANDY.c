#include<stdio.h>
#define ll long long
int main()
{
    ll int t;
    while(1)
    {
        ll int n;
        scanf("%lld",&n);
        if(n== -1)
            exit(0);
        ll int a[n],i,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        if(sum%n!=0)
        {
            printf("-1\n");
        }
        else
        {
        ll int d=sum/n;
        ll int count=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(d>a[i])
                ans+=d-a[i];
        }
        printf("%lld\n",ans);
        }
    }
    return 0;
}
