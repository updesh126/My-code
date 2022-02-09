#include<stdio.h>
#include<conio.h>
int main()
{
int b,d,t,g;
printf("enter your base salary");
scanf("%d",&b);
d=b*(0.1);
t=b*(0.12);
g=b+d+t;  //formula for gross salery
printf("gross salary is %d",g);
getch();
return 0;
}