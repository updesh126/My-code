#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a^b;
    b=b^c;
    a=a^c;
    printf("\nfinal value of a=%d and b=%d",a,b);
    getch();
    return 0;
}