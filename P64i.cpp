#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20],B[20],c[20];
    int i=0;
    printf("enter the string less then 20 words");
    gets(A);
    gets(B);
    if (strcmp(A,B)==0)
    {
        printf("strings are equal ");
    }
    else{
        printf("they are not equal");
    }
    
    getch();
    return 0;
} 