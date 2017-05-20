#include<stdio.h>
unsigned long long int fun(unsigned long long int t){
    unsigned long long int sum=0;
    while(t!=0){
        sum=sum + (t%10)*(t%10);
        t=t/10;
    }
    return sum;
}
int main()
{
    unsigned long long int n,t,t1,t2;
    long long int count=0;
    scanf("%llu",&n);
    t2=t=fun(n);
   // t2=t;
    if(t==1){
        count++;
    }
    else{
        while(1){
            t1=fun(t);
            if(t1==t2){
                count=-1;
                break;
            }
            else{
                count++;
                t=t1;
            }
            if(t1==1){
                break;
            }
        }
    }
    if(count==-1)
        printf("%lld\n",count);
    else
        printf("%lld\n",count+1);
    return 0;
}
