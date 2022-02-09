#include<stdio.h>
#include<conio.h>
int main()
{
    char col;
    printf("enter any alphabet");
    scanf("%c",&col);
    if (col=='v' && 'V')
    {
        printf("color is violet");
    }
    else if (col=='i'&&'I')
    {
        printf("color is indigo");
    }
    else if(col=='b'&&'B')
    {
        printf("color is blue");
    }
    else if(col=='y'&&'Y')
    {
        printf("color is yellow");
    }
    else if(col=='o'&&'O')
    {
        printf("color is orange");
    }
    else if(col=='r'&&'R')
    {
        printf("color is red");
    }
    else
    {
        printf("color is not find %c",col);
    }
    getch();
    return 0;
    
}