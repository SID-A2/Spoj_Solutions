#include<stdio.h>
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll int n;
        scanf("%lld",&n);
        if(n%2!=0){
            printf("%lld\n",n);
            continue;
        }
        else{
            int a[1000],r;
            ll int i=0,j;
            while(n){
                r=n%2;
                a[i]=r;
                n=n/2;
                i++;
            }
            n=0;
            int k=0;
            for(j=i-1;j>=0;j--){
                n+=a[j]*(1<<k);
                k++;
            }
            printf("%lld\n",n);
        }
    }
    return 0;
}
