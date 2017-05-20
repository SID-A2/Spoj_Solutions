#include<stdio.h>
#include<stdlib.h>
int a[26]={16,17,18,19,20,21,22,23,24,25,26,27,28,20,21,22,23,24,25,26,18,19,20,21,22,23};
int main()
{

    int i=0,sum=0,count=-1;
    while(1)
    {
    	char s[30];
        char c;
        i=0;
        sum=0;
        count=-1;
        while(1)
        {
            scanf("%c",&c);
            if(c=='\n' && count==2){
            	exit(0);
            }

            else if(c=='\n')
            	break;
            count++;
            if(count==3 && s[0]=='o' && s[1]=='u' && s[2]=='t')
            {
            	printf("21 18 26 ");
            	sum++;
            }
            if(c=='o' && count==0){
            	s[count]=c;
				continue;
            }
            else if(c=='u' && count==1){
            	s[count]=c;
				continue;
            }
            else if(c=='t' && count==2){
            	s[count]=c;
				continue;
            }
            i=c-'a';
            printf("%d ",a[i]);
            if(a[i]>23)
                sum++;
        }
        printf("\n");
        if(sum!=0)
            printf("%d\n",sum);
        else
            printf("no one.\n");
    }
    return 0;
}
