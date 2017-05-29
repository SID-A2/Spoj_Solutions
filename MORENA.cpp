#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    scanf("%d",&n);
    long long int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(i!=0){
            if(a[i]>a[i-1])
                b[i]=1;
            else if(a[i]<a[i-1])
                b[i]=-1;
            else
                b[i]=0;
        }
    }
    int c=1,s=0;
    for(i=1;i<n;i++){
        if(s==0 && b[i]!=0){
            c++;
            s=b[i];
        }
        else if(s==1 && b[i]==-1){
            c++;
            s=b[i];
        }
        else if(s==-1 && b[i]==1){
            c++;
            s=b[i];
        }
    }
    printf("%d\n",c);
    return 0;
}
