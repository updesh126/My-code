#include <stdio.h>
#include <string.h>
int main()
{
    char a[20],b[20];
    
    puts("enter any string");
    gets(a);
    strcpy(b,a);
    strrev(a);
    printf("%s", a);
    if (strcmp(a,b)==0)
    {
        printf("its a palidrome");
    }
    else{
        printf("its not");
    }
    return 0;
}