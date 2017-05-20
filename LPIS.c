/*#include<stdio.h>
#define ll long long
int main()
{
    ll int n;
    scanf("%lld",&n);
    ll int a[n],b[n];
    ll int i,j;
    for(i=0;i<n;i++)b[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    ll int max=1,count,first;
    for(i=0;i<n-1;i++)
    {
        if(max>=n-i)
            break;
        if(b[i]!=1){
        count=1;
        first=a[i];
        b[i]=1;
        for(j=i;j<n;j++)
        {
            if((a[j]-first)==1)
            {
                first=a[j];
                count++;
                b[j]=1;
                if(count>max)
                    max=count;
            }
        }
        }
    }
    printf("%lld\n",max);
    return 0;
}*/
#include<stdio.h>
#define ll long long
int main()
{
    ll int n;
    scanf("%lld",&n);
    ll int a[n];
    ll int i,j;
    ll int max=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    int b[max];
    for(i=0;i<=max;i++) b[i]=0;
    ll int count,first;
    max=0;
    for(i=0;i<n;i++)
    {
        b[a[i]]=b[a[i]-1] + 1;
        if(b[a[i]]>max)
            max=b[a[i]];
    }
    printf("%lld",max);
    return 0;
}
