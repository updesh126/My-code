#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 99;
    for (i = 99; 100 <= i || i > 90; i=i-2)
    {
        printf("%d\n", i);
    }

    getch();
    return 0;
}
