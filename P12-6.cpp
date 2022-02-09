#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter value for a and b..");
    scanf("%d%d",&a,&b);
    c=(a&b);
    printf("\nfor AND Operator %d",c);
    d=(a|b);
    printf("\nfor OR operator %d",d);
    e=(a^b);
    printf("\nfor XOR Operator %d",e);
    printf("\nfor ones compliment %d",~a);
    f=(a<<3);
    printf("\nfor left sift %d",f);
    g=(a>>2);
    printf("\nfor right sift %d",g);
    getch();
    return 0;
}