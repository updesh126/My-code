//name=updesh
#include<stdio.h>
#include<string.h>
int main()
{

    char A[10];

    int i=0,n,v=0,c=0;

    printf("enter the string or your name");
    gets(A);
    n = strlen(A);
    printf("no of elements are %d\n",n);


    for(i=0;i<n;i++)
    {
        if (A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
           v++;

        }
        else
        {
            c++;
        }

    }
    printf("vowels =%d\nconconants=%d\n",v,c);
    return 0;
}

