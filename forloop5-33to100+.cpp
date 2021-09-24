#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 101,sum=0;
    for (a = 101; a >= 33; a=a-2)
    {
        
        printf("%d\n",a);
         
        sum += a;
    }
    printf("sum of 33 to 100 is :%d",sum);
    getch();
    return 0;
}