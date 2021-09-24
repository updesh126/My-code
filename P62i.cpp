#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20],B[20];
    int l,i=0;
    printf("enter the string less then 20 words\n");
    gets(A);
    puts(A);
    strcpy(B,A);
    printf("\ncopy of entered string A is:%s",B);
    getch();
    return 0;
} 