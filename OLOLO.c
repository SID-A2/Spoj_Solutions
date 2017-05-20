#include<stdio.h>
#define ll long long
int main()
{
    int n;
    scanf("%d",&n);
    ll int i;
    ll int ans=0;
    ll int temp;
    for(i=0;i<n;i++){
        scanf("%lld",&temp);
        ans=ans^temp;
    }
    printf("%lld\n",ans);
    return 0;
}
