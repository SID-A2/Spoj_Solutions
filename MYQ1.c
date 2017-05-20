#include<stdio.h>
#include<stdlib.h>
#define ll long long
int main()
{
    int i, t;
    unsigned long long int n;
    scanf("%d", &t);
    unsigned long long int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%llu", &a[i]);

    }
    for(i=0;i<t;i++)
    {
        n=a[i];
        if(n==1)
            printf("poor conductor\n");
        else
        {
            unsigned long long int rowNum=(n-2)/5+1;
            int ans=(n-2)%10;
            char pos,dir;
            switch(ans)
            {
                case 0:
                    pos='W';
                    dir='L';
                    break;
                case 1:
                    pos='A';
                    dir='L';
                    break;
                case 2:
                    pos='A';
                    dir='R';
                    break;
                case 3:
                    pos='M';
                    dir='R';
                    break;
                case 4:
                    pos='W';
                    dir='R';
                    break;
                case 5:
                    pos='W';
                    dir='R';
                    break;
                case 6:
                    pos='M';
                    dir='R';
                    break;
                case 7:
                    pos='A';
                    dir='R';
                    break;
                case 8:
                    pos='A';
                    dir='L';
                    break;
                case 9:
                    pos='W';
                    dir='L';
                    break;
            }
            printf("%llu %c %c\n", rowNum, pos, dir);
        }
    }
    return 0;
}

