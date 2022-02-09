#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter any on");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is even value ",a);
    }
    else
    {
        printf("%d is odd value",a);
    }
    getch();
    return 0;
}