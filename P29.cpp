#include <stdio.h>
#include <conio.h>
int main()
{
    int n, p, rem, rev = 0;
    printf("enter any no: ");
    scanf("%d", &n); ///n=121
    p = n;           ////p=121
    while (n > 0)
    {
        rem = n % 10;         ////rem=121%10=1      rem=12%10=2           rem=1%10=1
        rev = rev * 10 + rem; /////rev=0+1=1         rev=1*10+2=12          rem=12*10+1=120+1=121
        n = n / 10;           ////n=121/10=12.1=12    n=12/10=1.2=1         n=1/10=0.1=0
                              //otpt          121
    }
    if (rev == p)
    {
        printf("%d is paindrome", p);
    }
    else
    {
        printf("%d is not paindrome", p);
    }
    getch();
    return 0;
}