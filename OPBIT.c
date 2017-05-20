#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==b)
            printf("0\n");
        else{
        int a1,b1;
        a1=sqrt(a);
        b1=sqrt(b);
        int i;
        int diff,xo,di,x,ans;
        diff=(a1+1)*(a1+1)-a1*a1;
        xo=0;
        for(i=a1;i<b1;i++)
        {
            di=(i+1)*(i+1)-i*i;
            diff=diff&di;
            xo=xo^di;
            if(diff==0)
                break;
        }
        ans=diff&xo;
        printf("%d\n",ans);
        }
    }
    return 0;
}
