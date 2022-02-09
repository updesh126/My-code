#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("enter any no\n");
    scanf("%d", &a);
    b = a % (2);
    if (a == 2)
    {
        printf("%d is prime no", a);
    }

    else if (b == 0)
    {
        printf("%d is not prime no", a);
    }
    else if (b != 0)
    {
        printf("%d is a prime no", a);
    }

    getch();
    return 0;
}