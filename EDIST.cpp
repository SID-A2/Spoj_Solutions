#include<bits/stdc++.h>
#include <iostream>
using namespace std ;
int dp[2500][2500];
int mini(int x, int y, int z)
{
   return min(min(x, y), z);
}
/*
int edit(string s1,string s2, int l1 ,int l2){
    if(l1==0)
        return l2;
    if(l2==0)
        return l1;
    if(s1[l1-1]==s2[l2-1])
        return edit(s1,s2,l1-1,l2-1);
    else
        return (1 + mini(edit(s1,s2,l1,l2-1),edit(s1,s2,l1-1,l2),edit(s1,s2,l1-1,l2-1)) );
}*/
void edit(string s1,string s2, int l1 ,int l2){
    int j,i;
    for(i=0;i<=l2;i++)
        dp[0][i]=i;
    for(i=0;i<=l1;i++)
        dp[i][0]=i;
    for(i=1;i<=l1;i++)
        for(j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]= 1 + mini(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
        }
   // return dp[l1][l2];
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s1[2010],s2[2010];
       // scanf("%s%s",s1,s2);
        scanf("%s%s",s1,s2);
        int l1=strlen(s1),l2=strlen(s2);
        edit(s1,s2,strlen(s1),strlen(s2));
        printf("%d\n",dp[l1][l2]);
    }
    return 0;
}
