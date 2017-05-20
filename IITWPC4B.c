#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int k,ans;
        if (n%2==0){
            k=n*n;
            if (k%48>24)
            ans= k/48  + 1;
            else
            ans= k/48;
        }
        else{
            k=(n+3)*(n+3);
            if (k%48>24)
            ans= k/48 + 1;
            else
            ans= k/48;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
