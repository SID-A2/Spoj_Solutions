#include <iostream>
#include<stdio.h>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
	ll int t;
    scanf("%lld",&t);
    while(t--)
    {
        ll int n;
        scanf("%lld",&n);
        ll int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        a[i]=-1;
     //   ll int j,tem;
      /*  for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    tem=a[i];
                    a[i]=a[j];
                    a[j]=tem;
                }
            }
        }*/
        std::sort(a,a+n);
        ll int ans=0,c=0;
       	ll int k;
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
                ans=ans+i+1;
            else{
                k=i,c=0;
                while(a[k]==a[i])
                {
                    c++;
                    i++;
                }
                ans=ans+c*(i);
                i--;
            }
        }
        printf("%lld\n",ans);
    }
	return 0;
}
