#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,avg,n;
        scanf("%d%d",&x,&avg);
        n=avg-x;
        int ans=n*(avg+1)-((n*(n-1))/2 );
        printf("%d\n",ans);
    }
    return 0;
}
