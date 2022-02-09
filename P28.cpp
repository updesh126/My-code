#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rev=0,rem;
    printf("enter any no ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;        //n=123   123%10=3      rev=0*10+3=3       123/10=12
        rev=rev*10+rem;    ///n=12 12%10=2       rev=3*10+2=32        12/10=1
        n=n/10;            /// n=1 1%10=1        rev=32*10+1=321       1/10=0
    }
    printf("rev is %d",rev);
    getch();
    return 0;
}