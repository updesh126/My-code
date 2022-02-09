//Write a program to check the given alphabet is vowel or consonant using switch case.//
#include<stdio.h>
#include<conio.h>
int main()
{
    char alph;
    printf("enter any alphabet");
    scanf("%c",&alph);
    switch (alph)
    {
    case 'a':case 'A': printf("%c is vowel",alph);
        break;
    case 'e':case 'E': printf("%c is vowel",alph);
        break;
    case 'i':case 'I': printf("%c is vowel",alph);
        break;
    case 'o':case 'O': printf("%c is vowel",alph);
        break;
    case 'u':case 'U': printf("%c is vowel",alph);
        break;            
    default: printf("%c is consonant",alph);
        break;
    }
    getch();
    return 0;
}