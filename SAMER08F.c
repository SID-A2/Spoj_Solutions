#include<stdio.h>
int main(){
    int n,i;
    int a[105]={0};
    a[1]=1;
    for(i=2;i<101;i++)
        a[i] = a[i-1] + i*i;
    scanf("%d",&n);
    while(n!=0){
        printf("%d\n",a[n]);
        scanf("%d",&n);
    }
    return 0;
}
