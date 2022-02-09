#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter value for a and b ");
    scanf("%d%d",&a,&b);
    c=(a%3)+(b%2);
    printf(" moduluse sum is %d",c);
    getch();
    return 0;
}