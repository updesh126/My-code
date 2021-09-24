#include <stdio.h>
int pam(int a);
int main()
{
    int a, b;
    printf("enter any no ");
    scanf("%d", &a);
    b = pam(a);
    return 0;
}
int pam(int a)
{
    int rem=0;
    rem=a%(2||3||5||7);
    if (a==2||a==3||a==5||a==7)
    {
        printf("%d is prime no",a);
    }  
    else if (rem==0)
    {
        printf("%d is not a prime no",a);
    }
    else
    {
        printf("%d is a prime no",a);
    }
    return 0;
    
}