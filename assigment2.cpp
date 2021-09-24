#include<stdio.h>
#include<conio.h>
int main()
{
    int a=20,b=30,c;
    printf("On swapping of data");
    c=a>b?a:b;
    b=c<a?c:a;
    a=c>b?c:b;
    printf("Now a=%d\tb=%d",a,b);
    getch();
    return 0;


}