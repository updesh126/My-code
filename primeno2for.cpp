#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=0;
    // printf("enter any no");
    // scanf("%d",&n);
    for(a=1;a<=100;a++)
    {
    
        b=a%2;
        if (b!=0)
        {
            printf("%d is prime no\n",a);
        }
        else if(a==2)
        {
            printf("%d is prime no\n",a);

        }
    }
    
    getch();
    return 0;
}