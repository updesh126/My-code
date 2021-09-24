#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20],B[20];
    int i=0,l=0,j;
    printf("enter the string less then 20 words");
    gets(A);
    printf("\n");
    l=strlen(A);
    for ( i = 0,j=l-1; i < l; i++,j--)
    {
        B[j]=A[i];
    }
    
    B[l]='\0';      
    printf("\ncopy of entered string A is:%s",B);
    getch();
    return 0;
} 