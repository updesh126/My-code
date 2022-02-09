#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    int a,b,cal;
    printf("Enter + - * / for calculus");
    scanf("%c",&c);
    printf("enter two value for calculus");
    scanf("%d%d",&a,&b);

    switch (c)
    {
    case '+':
        cal=a+b;
        printf("sum is %d",cal);
        break;
    case '-':
        cal=a-b;
        printf("sub is %d",cal);
        break;
    case '*':
        cal=a*b;
        printf("multi is %d",cal);
        break;
    case '/':
        cal=a/b;
        printf("divi is %d",cal);
        break;       
    default:
        printf("syntax error");
        break;
    }
    getch();
    return 0;
}