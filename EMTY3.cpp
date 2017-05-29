#include<bits/stdc++.h>
using namespace std;
#define fst first;
#define snd second;
int main() {
  int t,c=1; scanf("%d", &t);
  while(t--){
    char s[200010];
    scanf("%s", s);
    int n = strlen(s);
    vector< pair<char,int> > x;
    x.push_back( {'.', -1} );
   // vector<int> v(n+1);
    int v;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        x.push_back({s[i], i});
        while (x.size() >= 3 && x[x.size()-3].first=='1' && x[x.size()-2].first=='0' && x[x.size()-1].first=='0') {
            x.pop_back();
            x.pop_back();
            x.pop_back();
        }
        v = x.back().second;
        ans = max(ans, i - v);

    cout << i << ": ";
    for (int j =0; j < x.size(); ++j) {
      cout << "(" << x[j].first << "," << x[j].second << ")";
    }
    cout << endl;

  }
    printf("Case %d: %d\n",c,ans);
    c++;
  }
}
