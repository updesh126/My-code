#include<stdio.h>
#include<conio.h>
int main()
{
    char s[50],p[50],d[50];
    int i=0,j=0,k=0;
    printf("enter string 1");
    gets(s);
    printf("enter string 2");
    gets(p);
    while (s[i]!='\0')
    {
        d[k]=s[i];
        k++;
        i++;
    }
    while (p[j]!='\0')
    {
        d[k]=p[j];
        k++;
        j++;
    }
    d[k]='\0';
    puts(d);
    getch();
    return 0;
}