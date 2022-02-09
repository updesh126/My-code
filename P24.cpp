#include<stdio.h>
#include<conio.h>
int main()
{
    char sec;
    int a;
    printf("enter the sec://A or B");
    scanf("%c",&sec);
    switch (sec)
    {
    case 'A':
        printf("total students are 60");
        break;
    case 'B':
        printf("total students are 50");
        break;
    default:
        printf("this sec is not valid");
        break;
    }
    getch();
    return 0;
}