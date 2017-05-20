/*#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int k,j;
        int c=0;
        for(i=0;i<n;i++)
        {
           for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                    if((a[i]+a[j]<a[k] || a[j]+a[k]<a[i] || a[k]+a[i]<a[j]))
                        c++;
            }
        }
        printf("%d\n",c);
   }
   return 0;
}*/
#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        int a[n];
        int i,j,k,tem;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(a[i]>a[j])
                {
                    tem=a[i];
                    a[i]=a[j];
                    a[j]=tem;
                }

        int c=0;
        for(i=n-1;i>=0;i--)
        {
            j=0;k=i-1;
            while(j<k)
            {
                    while( j<k && a[j]+a[k]>=a[i])
                        k--;
                        c=c+(k-j);
                        j++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

