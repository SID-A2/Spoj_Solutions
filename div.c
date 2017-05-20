#include<stdio.h>
int rev(int r)
{
    int b=0;
    while(r!=0)
    {
        b= r%10 +b*10;
        r=r/10;
    }
    return b;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n1,n2;
        scanf("%d%d",&n1,&n2);
        n1=rev(n1);
        n2=rev(n2);
        int sum=n1+n2;
        sum=rev(sum);
        printf("%d\n",sum);

    }
    return 0;
}
