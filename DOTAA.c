#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,d;
        scanf("%d%d%d",&n,&m,&d);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            while(a[i]>d){
                a[i]=a[i]-d;
                m--;
            }
        }
        if(m<=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
