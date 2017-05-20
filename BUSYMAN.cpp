#include<bits/stdc++.h>
using namespace std;
struct time{
    int s,e;
};
int compare(const void * a,const void *b){
    struct time aa=*( struct time *)a;
    struct time bb=*( struct time *)b;
    return aa.e < bb.e ? -1 : ( aa.e > bb.e ? 1 : ( aa.s < bb.s ? -1 : aa.s > bb.s )) ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i;
        cin >> n ;
        struct time a[n];
        for(i=0;i<n;i++){
            cin >> a[i].s >> a[i].e;
        }
        qsort(a,n,sizeof(struct time),compare);
        int cnt=1,en=a[0].e;
        for(i=1;i<n;i++){
            if(a[i].s>=en){
                cnt++;
                en=a[i].e;
            }
        }
        cout << cnt <<endl;
    }
    return 0;
}
