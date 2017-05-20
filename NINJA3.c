#include<stdio.h>
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long int n,a,b,ans;
        scanf("%llu%llu%llu",&n,&a,&b);
        ans=gcd(a,b);
        while(ans--)
        {
            printf("%llu",n);
        }
        printf("\n");
    }
    return 0;
}
