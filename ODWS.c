#include<stdio.h>
#include<string.h>
#define MOD 1000000007
int main(){
	int t;
	scanf("%d",&t);
	char s1[1000],s2[1000];
	int c,i;
	for(c=1;c<=t;c++){
		scanf("%s%s",s1,s2);
		int len = strlen(s1);
		long long ans=0;
		for(i=0;i<len;i++){
			ans = (((s2[i] - 'a') - (s1[i] - 'a')) + ans * 26) % MOD ;
		}
		printf("Case %d: %lld\n",c,(ans - 1) % MOD);
	}
	return 0;
}
