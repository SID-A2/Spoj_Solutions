#include<string.h>
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    while(t--)
    {
    	char a[502],b[502];
    	memset(a,'\0',strlen(a));
    	memset(b,'\0',strlen(b));
    	scanf("%s",a);
    	scanf("%s",b);
    	i=0;
    	int count=0;
    	while(a[i]!='\0' && b[i]!='\0')
    	{
    		if(a[i]==b[i])
    			count++;
    			i++;
    	}
    	printf("%d\n",count);
    }
    return 0;
}
