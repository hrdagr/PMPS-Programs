#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 3, y = 4;

    printf("x = %d & y = %d", x, y);

    x = x + y;
    y = x - y;
    x = x - y;


    printf("\nx = %d & y = %d", x, y);

    return 0;
}
