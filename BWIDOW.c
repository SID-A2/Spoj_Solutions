#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int max1=0,max2=0,i,index,ans,c;
        long long int r[n],R[n];
        for(i=0;i<n;i++)
            scanf("%lld%lld",&r[i],&R[i]);
        int j,f=0;
        for(i=0;i<n;i++)
        {
            c=0,f=0;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(r[i]>R[j])
                        c++;
                    else
                        break;
                }
            }
            if(c==n-1){
                f=1;
                printf("%d\n",i+1);
                break;
            }
        }
        if(f==0)
            printf("-1\n");
    }
    return 0;
}
