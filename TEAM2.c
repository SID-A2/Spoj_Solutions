#include<stdio.h>
#define ll long long
int main()
{
    ll int a[100],i,j,temp,ans,cas=0;
    while(scanf("%lld",&a[0])!=EOF)
    {
        cas++;
        for(j=1;j<=3;j++)
            scanf("%lld",&a[j]);
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        ll int ans=a[2]+a[3];
        printf("Case %lld: %lld\n",cas,ans);
    }
    return 0;
}
