#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
float f,g;
printf("enter the L and B of rectangle");
scanf("%d%d",&a,&b);
c=2*a+2*b;  //this is formula of perameter of rectangle 
d=a*b;      // this is a formula of area of rectangle
printf("\nperameter is %d and area is %d of rectangle",c,d);
printf("\nenter the radius of circle");
scanf("%d",&e);
f=2*(3.14)*e;     //this is a formula of circle's circumference
g=(3.14)*e*e;      // this is a formula of area of circle
printf("\ncircumference is %f and area is %f of circle",f,g);
getch(); // this is use to stop screen for a while until user enter any key
return 0;
}
