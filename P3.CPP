#include<stdio.h>
#include<conio.h>
int main()
{
float a,b;
printf("enter the temperature in F");
scanf("%f",&a);
b=(a-32)*5/9;  //this is a formula for converting temp. *f to *c
printf("\ntemperature in C is %f",b);
getch();
return 0;
}