#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter the year");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("yes");
            }
            else
            {
                printf("NO");
            }
            
        }
        else
        {
            printf("Yes");
        }
        
    }
    else
    {
        printf("No");
    }
    getch();
    return 0;
}