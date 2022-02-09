#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a=0,b=1,c;
    for ( i = 0; i < 10; i++)
    {
       printf(" %d ",a);
       c=a+b;
       a=b;
       b=c; 
    }
    return 0;
}