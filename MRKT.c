#include<stdio.h>
#include<string.h>
struct c{
    char s[110];
};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        struct c a[n];
        int i;
        for(i=0;i<n;i++)
        {
            memset(a[i].s,'\0',strlen(a[i].s));
        }
        for(i=0;i<n;i++)
        {
            scanf("%s",&a[i].s);
        }
        int l;
        l=strlen(a[0].s);
      //  char ans[110];
      //  memset(ans,'\0',strlen(ans));
        int j=0,f=0;
        for(i=0;i<l;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(a[0].s[i]!=a[j].s[i]){
                        f=1;
                        break;
                 //  printf("%c",ans[j-1]);
                }
              //  else{
                //    break;
                  //  f=1;
                //}
            }
            if(f==1)
               break;
            else{
                printf("%c",a[0].s[i]);
            }
        }
     //   printf("\n%s\n",ans);
        printf("\n");
    }
    return 0;
}
