#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int p=1;
    while(t--)
    {
        printf("Case %d:\n",p);
        int n;
        scanf("%d",&n);
        char s[n+1];
        char r[n+1];
        scanf("%s",s);
        int m;
        scanf("%d",&m);
        while(m--)
        {
           int i;
           char dum,c;
           scanf("%d",&i);
           dum=getchar();
           c=getchar();
           s[i-1]=c;
           strcpy(r,s);
           strrev(r);
           int qw=strcmp(r,s);
           if(qw==0)
           {
               printf("YES\n");
           }
           else
           {
               printf("NO\n");
           }
        }
        p++;
    }
    return 0;
}
