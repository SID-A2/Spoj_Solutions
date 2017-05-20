#include<stdio.h>
#include<stdlib.h>
#define ll long long
int main()
{
    ll int n,i;
    scanf("%lld",&n);
    ll int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    ll int k,j,max;
    scanf("%lld",&k);
    for(i=0;i<n-k+1;i++)
    {
        max=a[i];
        for(j=i;j<i+k;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        printf("%lld ",max);
    }
    return 0;
}
