#include<stdio.h>
#define ll long long
ll int gcd(ll int p,ll int q)
{
    if(q==0)
        return p;
    else
        return gcd(q,p%q);
}
int main(){

    while(1)
    {
        ll int n,k,i,j;
        scanf("%lld%lld",&n,&k);
        if(n==-1 && k==-1)
        {
            break;
        }
        ll int nn=(k-1)/2;
        ll int p=(nn*k)-nn*(nn+1);
        ll int q= (n*(n-1))/2;
       /* ll int p=0,q=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    q++;
                    if(i+j<=k)
                        p++;
                }
            }
        }*/
        if(p==0)
        {
            printf("0\n");
        }
        else if(p==q)
        {
            printf("1\n");
        }
        else
        {
            ll int g;
            while(1) {
                g = gcd(p,q);
				if(g == 1) break;
				p=p/g;
				q=q/g;
				if(p == 1 || q == 1) break;
			}
         printf("%lld/%lld\n",p,q);
        }
    }
    return 0;
}
