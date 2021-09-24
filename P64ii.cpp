#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[20],B[20],c[20];
    int i=0,l1,l2,flag;
    printf("enter the string less then 20 words");
    gets(A);
    gets(B);
    l1=strlen(A);
    l2=strlen(B); 
    if (l1!=l2)
    {
        flag=1;
    }
    else
    {
        while (A[i]!='\0' && B[i]!='\0')
        {
            if (A[i]==B[i])
            {
                flag=0;
                i++;
            }
            else
            {
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            puts("string are equal");
        }
        else
        {
            puts("not same");
        }
        
    }
          
    getch();
    return 0;
} 