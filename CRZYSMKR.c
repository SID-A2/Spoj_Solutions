#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long int n;
        scanf("%llu",&n);
        int q=n%11,i;
        for(i=0;i<11;i++){
            if((11+(8*q)%11+i%11)%11==0)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
