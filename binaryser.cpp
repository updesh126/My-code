// Binary Search example

#include <stdio.h>
#include <conio.h>

int  main()
{
	int num[10], i, lb, ub, mid,n, pos = 1, data;
	printf("enter the n -no of elements");
	scanf("%d",&n);


	printf( " Enter Numbers in Ascending Order::: \n" );
	for( i=0 ; i<n ; i++ )
	{
		scanf( "%d", &num[i] );
	}

	printf( " Enter the number to be searched ::: " );
	scanf( "%d", &data );

	lb = 0;
	ub = n - 1;
	while(lb <= ub)
	{
		mid = (lb + ub) / 2;
		if( data == num[mid] )
		{
			pos = mid + 1;
			break;
		}
		else if ( data >= num[mid] )
			lb = mid + 1;
		else
			ub = mid - 1;
	}

	if( pos == -1 )
	{
		printf( "\n The element %d not found.", data );
	}
	else
	{
		printf( "\n The position of %d is ::: %d" , data, pos );
	}

	getch();
	return 0;
}
