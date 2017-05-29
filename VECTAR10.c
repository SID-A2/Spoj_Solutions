#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=1;
    while(n!=0){
        t=1;
        while( t < n ){
            t=t<<1;
        }
        if(t==n)
            printf("%d\n",n);
        else if(t>n){
            t=t>>1;
            printf("%d\n",(n-t)*2);
        }
        scanf("%d",&n);
    }
    return 0;
}
