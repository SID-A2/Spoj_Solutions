#include<stdio.h>
int main()
{
    while(1)
    {
        int l;
        scanf("%d",&l);
        if(l==0)
        {
            break;
        }
        float a;
        float d=2*3.1415926;
        a=(l*l)/d;
        printf("%0.2f\n",a);
    }
    return 0;
}
