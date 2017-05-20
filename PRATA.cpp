#include<bits/stdc++.h>
using namespace std;
int n,p;
int a[10000];
int check(int mid){
    int count = 0,temp=0;
    for(int i=0;i<n;i++){
        temp=0;
        temp+=(int)( sqrt( a[i]*a[i] + 8*a[i]*mid ) );
        temp-=a[i];
        temp/=(2*a[i]);
        count+=temp;
        if( count >= p )
            return 1;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> p >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int high=10*p*(p+1)/2;
        int low=1,mid;
        while(low<high){
            mid=(low+high) >> 1;
            if(check(mid)==1)
                high=mid;
            else
                low=mid + 1;
        }
        printf("%d\n",low);
    }
    return 0;
}
