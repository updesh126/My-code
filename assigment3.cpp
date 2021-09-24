#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a^b;
    // printf("\n now c=%d",c);   //this function is use for checking the value of c only
    b=b^c;
    // printf("\n now b=%d",b);   // this function is use for checking the value of b only
    a=a^c;
    printf("\nfinal value of a=%d and b=%d",a,b);
    getch();
    return 0;
}