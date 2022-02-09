#include <stdio.h>
#include <conio.h>
int swap(int a,int b);
int main()
{
    int a, b;
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b);
    swap(a,b);
    getch();
    return 0;
}
int swap(int a,int b)
{     
    int c;
    c = (a ^ b);
    b = (b ^ c);
    a = (a ^ c);
    printf("\nfinal value of a=%d and b=%d", a, b);
    return 0;
}