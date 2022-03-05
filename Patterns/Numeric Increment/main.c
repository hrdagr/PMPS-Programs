#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,j,rows,n=1;

   rows = 4;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   {printf("%d ",n);
        n = n+1;
	   }
	printf("\n");
   }
}
