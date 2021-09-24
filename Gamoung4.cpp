#include<stdio.h>
#include<conio.h>

int main()

{

int a,b,c,d,g;

printf("Enter 4 values a,b,c,d for finding gretest no amoung ");

scanf("%d%d%d%d",&a,&b,&c,&d);

g=(a>b)?((a>b)?(a>d?a:d):(c>d?c:d)):((b>c)?(b>d?b:d):(c>d?c:d));

printf("largest no amoung 4 nos is %d",g);

getch();


}