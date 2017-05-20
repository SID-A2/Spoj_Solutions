#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int ans;
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n],sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        if(sum%n==0)
            ans=n;
        else
            ans=n-1;
        printf("%d\n",ans);
    }
    return 0;
}
