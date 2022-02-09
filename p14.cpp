#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,d;
    char cal;
    printf("Enter sum=+ sub=- divi=/ multi=* mod='%' for calculus ");
    scanf("%c",&cal);
    printf("Enter any two value for calculus");
    scanf("%d%d",&a,&b);
    
    if(cal=='+')
    {
        d=a+b;
        printf("sum is %d",d);
    }
    else if(cal=='-')
    {
        d=a-b;
        printf("sub is %d",d);
    }
    else if(cal=='/')
    {
        d=a/b;
        printf("division is %d",d);
    }
    else if(cal=='*')
    {
        d=a*b;
        printf("multipil is %d",d);
    }
    else if(cal=='%')
    {
        d=a%b;
        printf("mod is %d",d);
    }
    else
    {
        printf("syntax ERROR");
    }
    
    getch();
    return 0;
}