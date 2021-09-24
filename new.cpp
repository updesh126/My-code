#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("enter any alph\t");
    scanf("%c",&x);
    switch (x)
    {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o':
    case 'u':
        printf("it is a vowel");
        break;
    
    default:
        printf("it a consonant");
        break;
    }
    return 0;
}