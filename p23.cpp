#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter any no");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("%d is even no",a);
        break;
    
    default:
        printf("%d is odd no",a);
        break;
    }
    getch();
    return 0;
}