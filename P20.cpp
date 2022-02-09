#include<stdio.h>
#include<conio.h>
int main()
{
    char sex,ms;
    int age;
    printf("Enter the marital status,sex,age");
    scanf("%c %c %d",&ms,&sex,&age);
    if (ms=='m')
    {
         printf("you shoude be a driver");
    }
    else if (ms=='u')
    {
        if (sex=='m')
        {
            if (age>30)
            {
                 printf("you shoude be a driver");
            }
            else
            {
                 printf("you can't be driver");
            }
            
        }
        else if (sex=='f')
        {
            if (age>25)
            {
                 printf("you shoude be a driver");
            }
            else
            {
                 printf("you can't be driver");
            }
        }

        

    }   
    else
    {
        printf("you can't be driver");
    }
        
    
    getch();
    return 0;
}