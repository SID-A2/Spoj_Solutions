#include<stdio.h>
#include<stdlib.h>
#define ll long long
int main()
{
    	ll int t;
    	scanf("%lld",&t);
        char c;
        ll int num,num1,ans;
        b:
        t--;
        scanf("%lld",&num);
        ans=num;
        while(1)
        {
            a:
            scanf("%c",&c);
            switch(c){
                case '*':scanf("%lld",&num1);
                        ans=ans*num1;
                        goto a;
                case '+':scanf("%lld",&num1);
                        ans=ans+num1;
                        goto a;
                case '-':scanf("%lld",&num1);
                        ans=ans-num1;
                        goto a;
                case '/':scanf("%lld",&num1);
                        ans=ans/num1;
                        goto a;
                case '=':
                        printf("%lld\n",ans);
                        if(t==0)
                            exit(0);
                        else
                            goto b;
                default :
                        goto a;

                }
           }

   return 0;
}
