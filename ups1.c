#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    char g,ms;
    printf("enter ms ,sex and age");
    scanf("%c %c %d",&ms,&g,&a);
    if (ms=='M')
    {
        printf("you cant marry");
    }
    else if (ms=='U')
    {
        if (g=='m')
        {
            if (a>21)
            {
                printf("you can marry");
            }
            else
            {
                printf("you cant marry");
            }
            
        }
        else if (g=='f')
        {
            if (a>18)
            {
                printf("you can marry");
            }
            else
            {
                printf("you cant marry");
            }
            
        }
        else
        {
            printf("you cant marry");
        }
        
    }
    getch();   
}