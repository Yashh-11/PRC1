#include<stdio.h>
int main()
{
float f;
float c;
printf("Enter celsius:");
scanf("%f",&c);
f=(9*c)/5+32;
printf("Temperature in fahrenheit is:%.1f",f);
return 0;
}