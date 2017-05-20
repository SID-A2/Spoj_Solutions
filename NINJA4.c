/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,x=0,y=0,i;
        scanf("%lld",&n);
        int f=0;
        for(i=1;i<=n;i++)
        {
            if(i&1){
                if(f<2)
                    x+=i;
                else{
                    x-=i;
                }
            }
            else{
                if(f<2)
                    y+=i;
                else{
                    y-=i;
                }
            }
                f++;
            if(f>3)
                f=0;
        }
        printf("%lld %lld\n",x,y);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,x=0,y=0,i;
        scanf("%lld",&n);
        if(n%4==0){
            x=y=-1*(n/2);
        }
        else if(n%4==1){
            x=y=-1*((n-1)/2);
            x=x+n;
        }
        else if(n%4==2){
            x=y=-1*((n-2)/2);
            x=x+n-1;
            y=y+n;
        }
        else if(n%4==3){
            x=y=-1*((n-3)/2);
            x=x-2;
            y=y+n-1;
        }
        printf("%lld %lld\n",x,y);

    }
    return 0;
}
