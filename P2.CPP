#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter two no for");
scanf("%d%d",&a,&b);
c=a+b;                    //Here +,-,/,*,%,etc are arithmetic operator
d=a*b;
e=a-b;
f=a/b;
printf("\nSum is %d",c);        
printf("\nProductis %d",d);
printf("\nsubb is %d",e);
printf("\ndivision %d",f);
getch();
return 0;
}