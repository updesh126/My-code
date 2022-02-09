#include<stdio.h>
#include<conio.h>
int main()
{
    char alph;
    printf("enter any alphabet");
    scanf("%c",&alph);
    if (alph=='a'&&'e'&&'i'&&'o'&&'u')
    {
        printf("%c is vowel",alph);
    }
    else if(alph=='A'&&'E'&&'I'&&'O'&&'U')
    {
        printf("%c is Vowel",alph);
    }
    else
    {
        printf("%c is consonant",alph);
    }
    
    getch();
    return 0;
}