#include <stdio.h>
int fact(int a);

int main()

{
    int a, b;
    printf("enter the no\n");
    scanf("%d", &a);
    b = fact(a);
    return 0;
}
int fact(int a)
{
    int i, factorial = 1;
    for (i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is: %d", a, factorial);
    return 0;
}