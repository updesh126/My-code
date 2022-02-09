#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,n=2,s;
    do
    {
        s=n*(++i);
        printf("%dx%d=%d\n",i,n,s);
    } while (i<10);
    getch();
    return 0;
}