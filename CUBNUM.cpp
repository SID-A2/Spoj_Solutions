#include<bits/stdc++.h>
using namespace std;
int a[50],cubnum[100001];
void searc()
{
    cubnum[0]=0;
    for(int i=1;i<100001;i++){
            cubnum[i]=100100;
        for(int j=50;j>=0;j--)
        {
            if(a[j]<=i)
                cubnum[i]=min(cubnum[i],1+cubnum[i-a[j]]);
        }
    }
}
int main(){
    int n;
    for(int i=0;i<50;i++)
        a[i]=i*i*i;
    searc();
    int c=1;
    while(scanf("%d",&n)!=EOF){
        printf("Case #%d: %d\n",c++,cubnum[n]);
    }
    return 0;
}
