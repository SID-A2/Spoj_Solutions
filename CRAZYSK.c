#include<stdio.h>
#include<math.h>
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned ll int x,n,c;
        scanf("%llu%llu",&x,&n);
        if(x%(n-1)==0){
            c=x/(n-1)-1;
        }
        else{
            c=x/(n-1);
        }
        printf("%llu\n",c+x);
    }
    return 0;
}
