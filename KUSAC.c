#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,ans=0,i,j;
    scanf("%d%d",&n,&m);
    if(n%m==0)
    {
        printf("0");
        exit(0);
    }
    j=n*m;
    for(i=0;i<j;i++)
    {
        if(i%n==0  &&  i%m!=0)
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
