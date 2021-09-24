//name=updesh
#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    char A[10];

    int i=0,n;

    printf("enter the string or your name");
    gets(A);
    n = strlen(A);
    printf("no of elements are %d\n",n);

    printf(" enter any vowel\n");
    scanf("%c",&a);
    for(i=0;i<n;i++)
    {
        if (A[i]==a)
        {
            printf(" %c in present at location%d \n",a,i+1);
            break;

        }

    }

    return 0;
}
