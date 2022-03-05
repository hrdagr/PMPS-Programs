#include <stdio.h>
#include <stdlib.h>

int main()
{   int rows = 0;

    printf("Enter number of of rows :");
    scanf("%d",&rows);

    for(int i = 0; i<rows; i++)
    {

        for(int j = 0; j<=i; j++)
        {
            printf("a");
        }

       printf("\n");
    }

    return 0;
}
