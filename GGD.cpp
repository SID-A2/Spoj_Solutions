#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=1;
    scanf("%d",&t);
    while(t--){
        int n,a;
        scanf("%d",&n);
        a=n/2;
        if(n==1)
            printf("Case %d: %d %d\n",c,n/2,n);
        else if(n==3)
            printf("Case %d: %d %d\n",c,n/2+1,n);
        else if(n%a!=0)
            printf("Case %d: %d %d\n",c,n/2,n-1);
        else
            printf("Case %d: %d %d\n",c,n/2,n);
        c++;
    }
    return 0;
}
