#include<stdio.h>
#define ll long long
int main()
{
    ll int n,m,i;
    scanf("%lld%lld",&n,&m);
    ll int a[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
      if(a[i]>max && a[i]<=m)
            max=a[i];
    }

    if(max!=m)
    {
        ll int curr=0;
        ll int left=0;
        max=0;
        for(i=0;i<n;i++)
        {
            curr=curr+a[i];
            while( curr>m )
            {
                curr=curr-a[left];
                left++;
            }
            if(curr>max)
            {
                max=curr;
                if(max==m)
                    break;
            }

        }
    }
    printf("%lld",max);
    return 0;
}
