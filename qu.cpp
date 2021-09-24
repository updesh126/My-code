#include <stdio.h>
#include <string.h>
int main()
{
    char s[20], p[20],d[50];
    int i = 0, j,n;
    printf("enter any string");
    scanf("%s", s);
    

    j = (strlen(s)) - 1;
    while (j >= 0)
    {
        p[j] = s[i];
        i++;
        j--;
    }
    p[i] = '\0';
    
    if (strcmp(s,p)==0)
    {
        printf("it is a palindrome");
    }
    else 
    {
        printf("it not");
    }
    
    
    return 0;
}