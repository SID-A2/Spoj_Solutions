#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int ans=0;
    for(i=1;i<=sqrt(n);i++)
    {
        for(j=i+1;j*i<=n;j++)
        {
            ans++;
        }
    }
    ans=ans + sqrt(n);
    printf("%d",ans);
    return 0;
}
