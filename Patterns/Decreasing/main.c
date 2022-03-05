#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 0; i<6; i++)
    {
        for(int j = 6; j-i>0; j--)
        {
            printf("*");
        }

       printf("\n");
    }

    return 0;
}
