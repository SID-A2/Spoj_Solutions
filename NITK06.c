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
        ll int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        if(a[0]>a[1]   ||    a[n-1]>a[n-2] )
        {
            printf("NO\n");
        }
        else{
            i=0;
            while(1)
            {
                if(a[i]==0)
                {
                    i++;
                }
                if(i==n-1)
                    break;
                a[i]=a[i]-1;
                a[i+1]=a[i+1]-1;
                if(a[i]==0)
                {
                    i++;
                }
                if(i==n-1)
                    break;
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=0)
                    break;
            }
            if(i==n)
                printf("YES\n");
            else
                printf("NO\n");

        }

    }
    return 0;
}
