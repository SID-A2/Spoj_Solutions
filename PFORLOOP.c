#include <iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll int t,i=0,a[100000];
    while(scanf("%lld",&t)!=EOF)
    {
        a[i++]=t;
    }
    std::sort(a,a+i);
    ll int n=i;
    ll int strt,trv,c;
    i=0;
    for(i=0;i<n;i++)
    {
        c=0;
        strt=a[i];
        trv=a[i];
        if(i+1<n){
            i=i+1;
            while((a[i]-trv)==1 && i<n){
                c++;
                trv=a[i];
                i=i+1;
            }
            i--;
        }
        printf("for (int i = %lld; i <= %lld; i++) cout << i << \" \";\n",strt,strt+c);

    }
    return 0;
}
