#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    char s[5000],r[2000],sd[2000],h[2000];
    scanf("%s",s);
    int i=0,j=0,k=0;
    while(s[i]!='e'){
        r[i]=s[i];
        i++;
    }
    r[i]='\0';
    i++;
    while(s[i]!='e'){
        sd[j++]=s[i++];
    }
    sd[j]='\0';
    i++;
    while(s[i]!='\0'){
        h[k++]=s[i++];
    }
    h[k]='\0';
    float rr=atof(r),sdd=atof(sd),hh=atof(h);
    float ans=sqrt((hh*hh + rr*rr)) * rr * 3.1415 * sdd;
  //  cout << rr << " " << sdd << " " << hh << "   " << ans << endl;
    long int ans1=(long int)(ans);
    if(ans1-ans==0)
        printf("%ld\n",ans1);
    else
            printf("%d\n",ans1+1);
    }
    return 0;
}
