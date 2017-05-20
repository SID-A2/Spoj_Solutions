#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        char s[100000];
        scanf("%s",s);
        int i;
        int r;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='.')
            {
                s[i]=32;
            }
            else if(k<=25 && s[i]>=97)
            {
                if( (s[i]+k) <='z'){
                s[i]=s[i]+k;
                }
                else{
                    s[i]=s[i]-26+k;
                }

            }
            else if(k<=25 && s[i]<=90)
            {
                s[i]=s[i]+k;
                if(s[i]>'Z')
                    s[i]=s[i]-26;
            }
            else if(k>25 && s[i]>=97)
            {
                r=k%26;
                if(s[i]+r <='z'){
                s[i]=s[i]+r-32;
                }
                else{
                    s[i]=s[i]-26+r-32;
                }
            }
            else if(k>25 && s[i]<=90)
            {
                r=k%26;
                s[i]=s[i]+r;
                if(s[i]>'Z')
                    s[i]=s[i]-26;
                s[i]=s[i]+32;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
