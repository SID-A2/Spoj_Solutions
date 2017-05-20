#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int i;
    if(a%2==0)
        a=a+1;
    long long int sum=0;
    for(i=a;i<=b;i=i+2)
    {
        sum=sum+i;
    }
    printf("%lld",sum);
    return 0;
}
