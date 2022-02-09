#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
printf("enter the value for a,b and c");
scanf("%d%d%d",&a,&b,&c);
d=(a>b)?(a>c?a:c):(c>b?c:b);
printf("largest no is %d",d);
getch();
return 0;
}
