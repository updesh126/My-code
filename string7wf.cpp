#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i=0,flag,l1,l2;
    printf("enter two string");
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    if (l1!=l2)
    {
        flag=1;
    }
    else
    {
        while (a[i]!='\0' && b[i]!='\0')
        {
            if (a[i]==b[i])
            {
                flag=0;
                i++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag=0)
        {
            puts("same");

        }
        else
        {
            puts("not");
        }
    }
    return 0;

}