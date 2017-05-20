#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,ans;
        scanf("%d%d",&x,&y);
        if(x==y || x==y+2)
        {
            if(x%2 ==0)
            {
                ans=x+y;
                printf("%d\n",ans);
            }
            else if(x%2!=0)
            {
                ans=x+y-1;
                printf("%d\n",ans);
            }
        }
        else
        {
            printf("No Number\n");
        }
    }
    return 0;
}
