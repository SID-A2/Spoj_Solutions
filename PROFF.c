#include<stdio.h>
int main()
{
    while(1)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        int c=0;
        int d=0,n,m;
        while(1)
        {
            n=a%10;
            m=b%10;
            if(n+m+c>9){
                c=10-9;
                d++;
            }
            else
            {
                c=0;
            }
            a=a/10;
            b=b/10;
            if(a==0 && b==0){
                break;
            }
        }
        if(d==0){
            printf("No carry operation.\n");
        }
        else if(d==1){
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",d);
        }
    }
    return 0;
}
