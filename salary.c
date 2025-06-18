#include<stdio.h>
int main(){
    int hra,da,ta,bs;
    printf("Enter basic salary:");
    scanf("%d",&bs);
    hra=bs*0.1;
    da=bs*0.05;
    ta=bs*0.08;
    printf("Gross salary is:%d",hra+da+ta+bs);
    return 0;
}