#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int m[n],w[n],i,j;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&m[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&w[i]);
        }
        long long int temp;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(m[j]>m[i])
                {
                    temp=m[i];
                    m[i]=m[j];
                    m[j]=temp;
                }
                if(w[j]>w[i])
                {
                    temp=w[i];
                    w[i]=w[j];
                    w[j]=temp;
                }
            }
        }
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+m[i]*w[i];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
