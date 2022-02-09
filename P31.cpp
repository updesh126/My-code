#include <stdio.h>
int main()
{
    int i, factorial = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is: %d", n, factorial);
    return 0;
}