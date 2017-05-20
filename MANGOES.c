#include<stdio.h>
/*long long int gcd(long long int a,long long int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}*/
int main(){
    long long int n,t,i;
    scanf("%lld",&t);
    while(t--)
    {
        long long int ans;
        scanf("%lld",&n);
        i=(n-1)/2;
        i=i*i;
        ans=i%n;

     /*   for(i=1;i<=n-2;i++)
        {
   //         if(gcd(i,i+1)==1 && gcd(i+1,i+2)==1 && gcd(i,i+2)==1)
                if(i%2!=0)
                    sum=(sum+i)%n;
        }*/
        printf("%lld\n",ans);
    }
    return 0;
}
