#include<stdio.h>
long long ar[100006],br[100007];
long long check(long long a,long long b){

    if(a>b){
        return 0;
    }
    long long dp[b+1],i;
    dp[a]=ar[a];
    dp[a-1]=0;
    for(i=a+1;i<=b;i++){
        dp[i]=max((dp[i-2]+ar[i]-br[i-1]),dp[i-1]-br[i]);
    }
 return dp[b];
}
int main(){
    long long a,b,c,i,j,n,x,y,z;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&ar[i]);
        }
        for(i=0;i<n;i++){
            scanf("%lld",&br[i]);
        }
    if(n==1){
        x=ar[0];
    }
    else if(n==2){
        x=max(ar[0]-br[1],ar[1]-br[0]);
    }
    else{
        y=ar[0]-br[n-1]-br[1]+check(2,n-2);
        z=check(1,n-1)-br[0];
        x=max(y,z);
    }
    printf("%lld\n",x);
 }
 return 0;
}
