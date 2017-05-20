#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if((n&(n-1))==0)
        printf("TAK");
    else
        printf("NIE");

    return 0;
}
