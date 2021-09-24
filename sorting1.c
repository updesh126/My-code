#include <stdio.h>
#include <conio.h>

int  main()
{
	int Ar[10], i,j,tem;


	printf( " Enter Ten Numbers in Ascending Order::: \n" );
	for( i=0 ; i<4 ; i++ )
	{
		scanf( "%d", &Ar[i] );
	}
	printf("you Input array is\n");
	for( i=0; i<4; i++)
    {
        printf("%d\n",Ar[i]);
    }
	/* Bubble sorting begins*/
	   for(i=0;i<4;i++)
       {
           for( j=0 ; j<(4-i-1);j++ )
           {
               if(Ar[j]>Ar[j+1])
               {
                   tem=Ar[j];
                   Ar[j]=Ar[j+1];
                   Ar[j+1]=tem;
               }
           }
       }
	      printf("sorting array is:\n ");
	      for(i=0;i<4;i++)
          {
              printf("\t%d\n",Ar[i]);
          }
          getch();
	return 0;
}
