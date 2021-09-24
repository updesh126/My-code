#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=20,c;
    printf("On swappint of data");
    c=a,b;
    a=(c,b);
    b=(a,c);
    printf("Now a=%d \t b=%d ",a,b);
    getch();
    return 0;
}