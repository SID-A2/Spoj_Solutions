#include<bits/stdc++.h>
using namespace std;
int dp[1000000][1000000];
int main(){
    int k,l
    scanf("%d%d",&k,&l);
    int a[k],b[l];
    scanf("%s%s",a,b);
    int i=0;j=0;
    d[0][0]=0;
    for(i=0;i<k;i++){
            for(j=0;j<l;j++){
                if(i>=2 && j>=2 && a[i]=b[j-1] && a[i-1]==b[j] && a[i]==b[j])
                    d[i][j]=max(d[i][j-1],d[i-1][j],d[i-1][j-1]);
                if(i>=2 && j>=2 && a[i]=b[j-1] && a[i-1]==b[j] && a[i]!=b[j])
                    d[i][j]=max(d[i][j-1],d[i-1][j],d[i-1][j-1]+1);
            }
    }



}
