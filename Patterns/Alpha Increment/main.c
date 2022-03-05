#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,j,rows;

   rows = 4;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%c",(char)(j+64));
	printf("\n");
   }
}

