#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,u,v;
    cin >> n >> m;
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for(int i=1;i<=m;i++){
        cin >> u >> v;
        a[u][v]=a[v][u]=1;
    }

}

