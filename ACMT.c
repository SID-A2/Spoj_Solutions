#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int e,n;
        scanf("%d%d",&e,&n);
        int count=0;
        while( e>0 && n>0)
        {
            if(e>=n && n>=1)
            {
                count++;
                e=e-2;
                n=n-1;
                if(e<0)
                    count--;
            }
            else if(e<n && e>=1)
            {
                count++;
                e=e-1;
                n=n-2;
            }
            else{
            e--;
            n--;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
