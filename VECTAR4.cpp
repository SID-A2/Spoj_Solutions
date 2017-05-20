#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n,l,b,b1,ans,diff;
        cin >> n;
        b=sqrt(n);
        l= n - b*b ;
        ans= 2*b - 1;
        if(l==0){
            cout << ans << endl;
        }
        else{
           /* b1=(b+1)*(b+1);
            b=b*b;
            diff=(b1-b)/2;
            */
            if(l<=b)
                cout<< ans+1 <<endl;
            else
                cout<< ans+2<<endl;
        }

    }
    return 0;
}
