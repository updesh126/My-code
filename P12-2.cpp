#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the value for a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=a>b&&c>a;
    printf("Result for LOgical AND is %d",d);
    getch();
    return 0;

}