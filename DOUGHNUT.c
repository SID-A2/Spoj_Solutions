#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c,k,w;
        scanf("%d%d%d",&c,&k,&w);
        if(c*w<=k && k!=0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
