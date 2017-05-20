#include<stdio.h>
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        ll int a[n];
        int b[n];
        ll int count=0;
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[i]=0;
        }
        int temp;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i] > a[j]){
                   temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if( ( a[j]==2*a[i] )&& i!=j && b[i]!=1 && b[j]!=1){
                    count++;
                    b[i]=1;
                    b[j]=1;
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
