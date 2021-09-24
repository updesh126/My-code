#include <stdio.h>
int pal(int a);
int main()
{
    int a,b;
    printf("enter any no ");
    scanf("%d", &a);
    b=pal(a);
    return 0;
}
int pal(int a)
{
    int rev=0, rem, p;
    p = a;
    while (a > 0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    printf("reverse of no is %d",rev);
    return 0;
}