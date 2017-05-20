#include<stdio.h>
#define ll long long
unsigned long long int min(unsigned long long int x,unsigned long long int y)
{
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        unsigned long long int a[n],b[n],i,c=0,prev,pres;
        for(i=0;i<n;i++)
            scanf("%llu",&a[i]);
        for(i=0;i<n;i++)
            scanf("%llu",&b[i]);
        prev=min(a[0],b[0]);
  //    printf("%lld\n",prev);
        for(i=1;i<n;i++){
            if(a[i]>=prev || b[i]>=prev){
                if(a[i]>=prev && b[i]>=prev)
                    prev=min(a[i],b[i]);
                else if(a[i]>=prev && b[i]<=prev)
                    prev=a[i];
                else if(b[i]>=prev && a[i]<=prev)
                    prev=b[i];
            }
            else
                break;
        }
        if(i==n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
