#include<stdio.h>
#include<conio.h>
int main()
{
    float a;
    printf("enter your percentage");
    scanf("%f",&a);
    if (a>=60)
    {
        printf("you have 1st division");
    }
    else if (a>=50&&a<60)
    {
        printf("you have 2nd divisionn");
    }
    else if (a>=30&&a<50)
    {
        printf("you have 3rd division");
    }
    else
    {
        printf("you are fale");
    }
    getch();
    return 0;
}