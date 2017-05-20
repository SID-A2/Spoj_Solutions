#include<stdio.h>
#define ll long long
int main()
{
    ll int l,r;
    scanf("%lld%lld",&l,&r);
    ll int i,j;
    ll int max=-1,cur;
    for(i=l;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            cur=i^j;
            if(cur>max)
            {
                max=cur;
            }
        }
    }
    printf("%lld",max);
    return 0;
}
