#include<stdio.h>
#include<conio.h>
int main()
{
float a,p,r,t;
printf("enter the P amount, rate and time for simple intrust");
scanf("%f%f%f",&p,&r,&t);
a=(p*r*t)/100;
printf("simple intrust is %f",a);
getch();
return 0;
}