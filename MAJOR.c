#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count,max=1,ans=10000,j,temp;
        for(i=0;i<n;i++)
        {
            count=1;
            temp=a[i];
          if(temp!=10000){
            for(j=i+1;j<n;j++)
            {
                if(temp==a[j])
                {
                    count++;
                    a[j]=10000;
                }
            }
                if(count>max)
                {
                    max=count;
                    ans=a[i];
                }

            }
        }
        if(max>n/2)
        {
            printf("YES %d\n",ans);
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
