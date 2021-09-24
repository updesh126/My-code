#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],p[50];
    printf("the two string ");
    gets(s);
    gets(p);
    strcat(s,p);
    puts(s);
    return 0;

}