#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=1;
    cin >> t;
    while(t--){
        int n,i;
        //vector<long long int> a(n);
        cin >> n;
        if(n!=0){
        unsigned long long int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        unsigned long long int dp[n];
        dp[0]=a[0];
        dp[1]=max(dp[0],a[1]);
        for(i=2;i<n;i++){
            dp[i]=max(a[i]+dp[i-2],dp[i-1]);
        }
       /* for(i=0;i<n;i++)
            cout << dp[i] << " ";
        cout << endl;
       */
       cout << "Case" << " "<< c << ":" << " " << dp[n-1] << endl;
        }
        else
            cout << "Case" << " "<< c << ":" << " " << "0" << endl;
        c++;
    }
    return 0;
}
