#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n],i,sum=0;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum=(sum+a[i])%n;
        }
        if(sum%n==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
