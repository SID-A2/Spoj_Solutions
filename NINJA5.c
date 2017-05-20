#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        int ans[n+2];
        memset(ans,0,sizeof(ans));
        int num,i,count=0;
        for(i=0;i<k;i++){
            scanf("%d",&num);
            ans[num]=-10000;
            ans[num-1]++;
            ans[num+1]++;
        }
        for(i=1;i<=n;i++){
            if(ans[i]<=0){
                count++;
                ans[i+1]++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
