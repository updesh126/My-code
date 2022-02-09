#include<stdio.h>
#include<conio.h>
int fec(int n);
int main()
{
    int n,i;
    printf("enter the number : ");
    scanf("%d",&n);
    i=fec(n);
    printf("factorial of %d is:%d",n,i);    
    getch();
    return 0;
}
int fec(int n)
{
    int a=0;
    if (n>=1)
    {
        a=n*fec(n-1);
        return a;
    }
    else
    return 1;      
}