#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter any on");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is positive value ",a);
    }
    else if (a==0)
    {
        printf("%d is zero value",a);
    }
    else
    {
        printf("%d is negative",a);
    }
    getch();
    return 0;
}