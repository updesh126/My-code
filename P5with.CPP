#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter two no for a and b");
scanf("%d%d",&a,&b);
c=a;  //now c=value of i.a
a=b;  //now a= value of i.b
b=c;  //now b=c=value of i.a
printf("a=%d\tb=%d\tc=%d",a,b,c);
getch();
return 0;
}