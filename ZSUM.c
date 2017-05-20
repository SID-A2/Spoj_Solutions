#include<stdio.h>
#define ll long long
#define mod 10000007
ll int expo(ll int a,ll int b){
    ll int ans=1;
    while(b!=0){
        if(b&1){
            ans=((ans%mod)*(a%mod))%mod;
        }
        a=(a*a)%mod;
        b=b/2;
    }
    return ans;
}
int main(){
    int t;
    while(1){
        ll int n,k;
        scanf("%lld%lld",&n,&k);
        if(n==0 && k==0)
            break;
        else if(n!=0 && k!=0){
            ll int ans,ans1,ans2,ans3;
            ans=(2*expo(n-1,k))%mod;
            ans1=(2*expo(n-1,n-1))%mod;
            ans2=(expo(n,k))%mod;
            ans3=(expo(n,n))%mod;
            ans=(ans+ans1+ans2+ans3)%mod;
            printf("%lld\n",ans);
        }
    }
    return 0;
}
