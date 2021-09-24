#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,a=0;
    for (i=1;i<=30; i++)
    {
        
          a+=i;    //a+=i     a1=a+i  a=1+2+3....x30    i=n=30 a=0 sum of ap (n/2)(2a1+(n-1)d)  d=1                                                    
    }
    printf("%d",a);
    getch();
    return 0;
}