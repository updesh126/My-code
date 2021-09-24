#include <stdio.h>
int pal(int a);
int main()
{
    int a,b;
    printf("enter any no ");
    scanf("%d", &a);
    b=pal(a);
    if (b=1)
    {
        printf("%d is palindrome",a);
    }
    else
    {
        printf("%d is not a palindrome",a);
    }
    
    return 0;
}
int pal(int a)
{
    int rev, rem, p;
    p = a;
    while (a > 0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    if (rev== p)
    {
       return 1;// printf("%d a palindrome", p);
    }
    else if (rev != p)
    {
        return 0; // printf("%d not palindrome", p);
    }
    return 0;
}