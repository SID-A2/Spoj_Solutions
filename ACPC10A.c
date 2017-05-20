#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,n3,d,r;
    while(1)
    {
        scanf("%d%d%d",&n1,&n2,&n3);
        if(n1==0 && n2==0 && n3==0)
            exit(0);
        else if(n2==(n1+n3)/2.0)
        {
            printf("AP ");
            d=n2-n1+n3;
            printf("%d",d);
        }
        else if(n2*n2==n1*n3)
        {
            printf("GP ");
            r=(n2*n3)/n1;
            printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}
