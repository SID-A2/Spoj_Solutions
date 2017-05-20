#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,temp=0,j,a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>i)
            temp=1;
        }
        if(temp==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
