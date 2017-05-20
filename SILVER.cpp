#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n ;
   while(n)
   {
      int ans=0;
      while(n>1)
      {
         n=n>>1;
         ans++;
      }
      cout << ans << endl;
      cin >> n ;
   }
   return 0;
}
