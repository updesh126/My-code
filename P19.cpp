#include<stdio.h>
#include<conio.h>
int main()
{
    char sex,ms;
    int age;
    printf("Enter marital status,sex,age");
    scanf("%c %c %d",&ms,&sex,&age);
    if (ms=='m')
    {
        printf("you can't marry");
    }
    else if (ms=='u')
    {
        if (sex=='m')
        {
            if (age>21)
            {
                printf("you can marry");
            }
            else
            {
                printf("you can't marry");
            }
            
        }
        else if (sex=='f')
        {
            if (age>18)
            {
                printf("you can marry");
            }
            else
            {
                printf("you can't marry");
            }
             
        }
        
    }
    else
    {
        printf("inviled married status");
    }
    
      
    getch();
    return 0;        
}