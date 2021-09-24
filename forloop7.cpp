#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    float a, sum = 0;
    for (i=1; i<10; i++)
    {
        sum+=i;
    }
    a=sum/10;
    printf("avg value is %f",a);
}