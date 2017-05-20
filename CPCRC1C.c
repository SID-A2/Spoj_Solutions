#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        if(a== -1 && b== -1)
        {
            exit(0);
        }
        long long int i,sum=0,temp,r;
        for(i=a;i<=b;i++)
        {
            r=i;
            while(r!=0)
            {
                temp=r%10;
                sum=sum + temp;
                r=r/10;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
