#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int i,j,f,z=0;
        float a[k+1];
        for(i=2;i<n;i++)
        {
            f=0;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                    f=1;
            }
            if(f==0){
                a[z++]=i;
            }
            if(z>=k)
                break;
        }
        float ans;
        if(z%2!=0)
        {
            ans=a[z/2];
            printf("%0.6f\n",ans);
        }
        else
        {
            ans=( a[z-1] + a[z-2] ) / 2;
            printf("%0.6f\n",ans);
        }
    }
    return 0;
}

// ans=(n+1)/2.0   //  ---> AC
