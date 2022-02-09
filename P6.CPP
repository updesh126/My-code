#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the marks of all 5 sub");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=(a+b+c+d+e)/5; //percentage formula
printf("total percentage is %d",f);
getch();
return 0;
}