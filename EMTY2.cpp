#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >> t;
      char s[120002];
      int c=1;
      while(t--)
      {
              cin >> s;
              vector<int>v;
              int i=0;
              while(s[i]!='\0')
              {
                    v.push_back(s[i]-'0');
                    int u=v.size();
                    if(u>=3)
                    {
                           if(v[u-1]==0 && v[u-2]==0 && v[u-3]==1)
                           {
                                    v.erase(v.begin()+u-1);
                                    v.erase(v.begin()+u-2);
                                    v.erase(v.begin()+u-3);
                           }
                    }
                    i++;
              }
              printf("Case %d: ",c);
              if(v.size()==0)
                 printf("yes\n");
              else
                 printf("no\n");
              c++;
     }
     return 0;
}
