#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the 3 value");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    { 
        if(a>c)
        {   
            printf("\n%d",a);
        }
        else if (c>a)
        {   
            printf("\n%d",c);
        }
        
    }
    else if (b>a)
    {   
        if(b>c)
        {
            printf("\n%d",b);
        }
        else if(c>b)
        {
            printf("\n%d",c);
        }
    }
    

    getch();
    return 0;
}