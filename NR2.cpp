#include<cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    unsigned long long int a[n],some=0ULL,all=~0ULL,ans;
    for(int i=0;i<n;i++){
        scanf("%llu",&a[i]);
        all=all&a[i];
        some=some|a[i];
    }
    ans=all^some;
    printf("%llu\n",ans);
    return 0;
}
