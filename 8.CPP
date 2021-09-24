#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
float f;
printf(" enter two digit for calculation");
scanf("%d%d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf("sum is %d\n sub is %d\n pro is %d\n division is %f",c,d,e,f);
getch();
return 0;
}