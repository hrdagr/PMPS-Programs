#include <stdio.h>
#include <stdlib.h>

int main() {
   int i, s, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0)
    {
        for (s = 1; s <= rows - i; ++s)
        {
         printf("  ");
        }
      while (k != 2 * i - 1)
      {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}