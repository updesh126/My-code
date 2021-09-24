#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter any two no for a and b");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is greatest",a);
    }
    else
    {
        printf("%d is greatest",b);
    }
    getch();
    return 0;
}