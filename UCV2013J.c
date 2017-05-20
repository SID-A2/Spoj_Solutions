#include<stdio.h>
int main()
{
    while(1)
    {
        int n,ct=0;
        scanf("%d",&n);
        if(n==0)
            break;
        else if(n>1)
        {
        	if(n%2==0)
                ct=n/2;
            else
                ct=(n+1)/2;
        }
        int a[n],i;
        long long sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i>=ct-1 && n%2!=0)
            	sum+=a[i];
            else if( i>=ct )
                sum+=a[i];
        }
        if(n==1)
            printf("%d\n",a[0]);
        else{
            printf("%lld\n",sum);
        }
    }
    return 0;
}
