#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20];
    printf("enter the string less then 20 words");
    gets(A);
    printf("\n");
    puts(A);
    strrev(A);
    
    printf("\nreverse of entered string A is:%s",A);
    getch();
    return 0;
} 