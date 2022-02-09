#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter any two value for a and b");
    scanf("%d%d",&a,&b);
    a=a-b;  //a=i.a-i.b
    b=a+b;  //b=(i.a-i.b)+i.b=i.a
    a=b-a;  //a=i.a-(i.a-i.b)=i.b
    printf("a=%d and b=%d",a,b);
    getch();
    return 0;
}