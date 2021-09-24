#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 30, sum=0;
    for (a = 30; a; a-=3)
    {
        sum += a;
    }
    printf("sum is :%d", sum);
    getch();
    return 0;
}