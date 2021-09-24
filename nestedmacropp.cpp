#include<stdio.h>
#include<conio.h>
#define m 100
#define n (m+10)
main()
{

    int a;
    a=m*n;
    printf("%d\n",a);
    #undef m
    #define m 10
    a=m*n;
    printf("%d",a);
}
