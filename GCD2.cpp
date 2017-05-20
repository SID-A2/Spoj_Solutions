#include<bits/stdc++.h>
using namespace std ;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int mod(string b,int a){
    int l=b.length();
    int ans=0;
    for(int i=0;i<l;i++){
        ans=ans*10 + (b[i]-48);
        ans=ans%a;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        string b;
        cin >> a;
        cin >> ws;
        cin >> b;
        if(a==0){
            cout << b ;
        }
        else{
            int bb=mod(b,a);
            cout << gcd(a,bb);
        }
        cout << endl;
    }
    return 0;
}
