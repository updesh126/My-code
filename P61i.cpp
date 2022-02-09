#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20];
    int l;
    printf("enter the string less then 20 words\n");
    gets(A);
    puts(A);
    l=strlen(A);
    printf("\nlength of entered string:%d",l);
    getch();
    return 0;
}