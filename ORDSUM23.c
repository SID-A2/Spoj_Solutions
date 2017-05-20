#include<stdio.h>
#define SIZE 1000001
#define ll long long
#define MOD 1000000007

int main(){
    int i,t,n;
    ll a[SIZE];
    scanf("%d", &t);
    a[0]=0;a[1]=0;a[2]=1;a[3]=1;
    for(i=4;i<SIZE;i++)
        a[i]=(a[i-2]+a[i-3])%MOD;
    while(t--){
        scanf("%d", &n);
        printf("%lld\n", a[n]);
    }
    return 0;
}
