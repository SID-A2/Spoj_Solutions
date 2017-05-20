#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int sum=0;
        long long int ans=1;
        long long int num=5;
        while(ans>0)
        {
            ans=n/num;
            sum=sum + ans;
            num=num*5;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
