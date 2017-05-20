#include<stdio.h>
int cube[51];
int main()
{
    int i;
    for(i=0;i<51;i++) cube[i]=i*i*i;
    int n;
    scanf("%d",&n);
    int count=0;
    int b,c,d,e;
    for(i=0;i<51;i++)
    {
        int a1=cube[i];
        if(a1>n) break;
        for(b=i;b<51;b++)
        {
           	int b1=a1+cube[b];
            if(b1>n) break;
            for(c=b;c<51;c++)
            {
                int c1=b1+cube[c];
                if(c1>n) break;
                for(d=c;d<51;d++)
                {
                    int d1=c1+cube[d];
                    if(d1>n) break;
                    for(e=d;e<51;e++)
                    {
                        int sum=d1+cube[e];
                        if(sum>n) break;
                        if(sum==n) count++;
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
