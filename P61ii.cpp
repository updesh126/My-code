#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20];
    int i=0;
    printf("enter the string less then 20 words\n");
    gets(A);
    puts(A);
    while (A[i]!='\0')
    {
        i++;

    }
    printf("%d",i);
        
    getch();
    return 0;
}