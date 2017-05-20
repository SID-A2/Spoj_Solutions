#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char k[10];
        char s[510];
        scanf("%s",k);
        scanf("%s",s);
        int i=0,j=0,c=0,f=2;
        for(i=0;s[i]!='\0';i++)
        {
            if(k[j]=='\0')
            {
            	f=0;
                c=1;
                j--;
            }
          /*  if(c==1 && j==0)
            {
                c=0;
                j=0;
            }*/
            if(s[i]-(k[j]-'0')>='a'){
                s[i]=s[i]-(k[j]-'0');
                if(c==0 && j==0 && f==0)
                {
                    f=1;
                }
                else if(c==0)
                    j++;
                else if(c==1)
                    j--;
            }
            else if(s[i]-(k[j]-'0')<'a'){
                s[i]=s[i]-(k[j]-'0')+26;
                if(c==0 && j==0 && f==0)
                {
                    f=1;
                }
                else if(c==0)
                    j++;
                else if(c==1)
                    j--;
            }
            if(c==1 && j==0)
            {
                f=0;
                c=0;
                j=0;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
