#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void compute(){
    int sq[1001];
    for(int k=0;k<1001;k++)
        sq[k]=k*k;
    a[0]=0;
    a[1]=1;
    for(int i=2;i<1000001;i++)
    {
        a[i]=0;
        for(int j=1;j<1001;j++)
        {
            if(sq[j]<=i){
                a[i]|=!(a[i-sq[j]]);
            }
            else
                break;
            if(a[i]==1)
                break;
        }
    }

}
int main(){
    int t;
    scanf("%d",&t);
    compute();
    while(t--){
        int n;
        scanf("%d",&n);
        if(a[n]==1)
            printf("Win\n");
        else
            printf("Lose\n");
    }
    return 0;
}
