#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value for a and b");
    scanf("%d%d",&a,&b);
    printf("\n%d\t%d",++a,a);
    printf("\n%d\t%d",--b,b);
    getch();
    return 0;
}