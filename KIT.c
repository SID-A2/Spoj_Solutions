#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    while(1)
    {
        i=0;
        char s[100000];
        scanf("%s",s);
        if(s[0]=='-')
            break;
        while(1){
            if(s[i]=='\0')
                break;
            if(j>=n)
                j=0;
            if(s[i]+a[j]<='z'){
                s[i]=s[i]+a[j];
                i++;
                j++;
            }
            else if(s[i]+a[j]>'z')
            {
                s[i]=s[i]-26+a[j];
                i++;
                j++;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
