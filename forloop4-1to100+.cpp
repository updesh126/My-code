#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 1, sum=0;
    for (a = 1; a <= 100; a++)
    {
        sum += a;
    }
    printf("sum of 1 to 100 is :%d", sum);
    getch();
    return 0;
}