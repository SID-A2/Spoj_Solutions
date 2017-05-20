#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l=s.length();
        int ans=0;
        for(int i=0;i<l;i++)
        {
            ans=( (ans*10)%495 + (s[i]-48)%495 )%495;
        }
        if(ans)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
