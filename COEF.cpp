#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int fact(int n)
{
  return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}
int main(){
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF){
        ll int a[k];
        ll int ans=fact(n);
        for(int i=0;i<k;i++){
            cin >> a[i];
            ans=ans/fact(a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
