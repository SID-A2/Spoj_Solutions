#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double n1;
        int n2;
        n1=sqrt(n);
        n2=n1;
     //   printf("%lf        %d\n",n1,n2);
        double diff=n1-n2;
        if(diff==0.0000000000)
            printf("0\n");
    //    printf("%.10lf\n",diff);
        else{
        int sum=0,i,d;
        double d1;
        for(i=0;i<=9;i++)
        {
            d=10*diff;
            d1=10*diff;
        //    printf("%d   ",d);
            sum=sum+d;
            diff=d1-d;
        }
      //  printf("\n");
        printf("%d\n",sum);
    }
    }
    return 0;
}
