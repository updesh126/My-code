#include <stdio.h>

main()
{
    int  i,n=2,p;
    for (i=1; i<100; i++)
    {   p+=i;
        printf("%d\n",p%n);
    }
    return 0;
}