//insertion sorting
#include<stdio.h>
int main()
{
    int n,array[50],i,j,key;
    printf("Enter number of elements\n");
    scanf("%d",&n);

    printf("enter %d integers\n",n);
    for(i = 0; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i = 1 ; i < n ; i++)
    {
        key = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > key)
        {
            array[j+1] = array[j];
            j = (j - 1);
        }
        array[j+1] = key;
    }
    printf("after insertion \n");
     for( i = 0 ; i < n; i++)
    {
        printf(" %d\n", array[i]);
    }
    return 0;
}
