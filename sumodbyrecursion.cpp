#include<stdio.h>
int fac(int n);
int fact=1;
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    fact=fac(n);
    printf("%d",fact);
    return 0;
}
int fac(int n)
{
    if(n>0)
    {
        fact=fact*n;
        fac(n-1);
    }
    return fact;
}