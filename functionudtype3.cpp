#include <stdio.h>
int sum();
int main()
{
    int  c;
    c = sum();
    printf("%d", c);
    return 0;
}
int sum()
{
    int c,a,b;
    printf("enter the a,b");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}