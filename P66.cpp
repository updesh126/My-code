#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20],i;
    printf("enter the string A");
    gets(a);
    strcpy(b,a);
    strrev(a);
    if (strcmp(b,a)==0)
    {
        printf("it's a palindrome");
    }
    else{
        printf("it's not");
    }
    getch();
    return 0;
}