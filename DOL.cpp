#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int cnt=1;
    while(t--){
        unsigned long long int n,a;
        cin >> n;
        printf("Case %d: ",cnt++);
        if(n&1)
            cout << n << endl;
        else{
            while(n%2==0){
                n = n >> 1;
            }
            cout << n << endl;
        }
    }
    return 0;
}
