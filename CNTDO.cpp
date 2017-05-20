#include<bits/stdc++.h>
using namespace std;
int compare(const void * a, const void * b){
    return *(int *)a - *(int *)b;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,i,cnt=0,val,j;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
            cin>> a[i];
        qsort(a,n,sizeof(int),compare);
        for(i=0;i<n;i++){
               val= a[i] << 1;
            if(val>=0){
                for(j=i;j<n;j++){
                    if(a[j]== val)
                    {
                        cnt++;
                        break;
                    }
                    else if( a[j]>val )
                        break;
                }
            }
            else{
                for(j=i;j>=0;j--){
                    if(a[j]== val)
                    {
                        cnt++;
                        break;
                    }
                    else if( a[j]<val )
                        break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
