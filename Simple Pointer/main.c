#include <stdio.h>
#include <stdlib.h>

int main()
{   int a;

    a = 10;
    int *p = &a;
    a = 20;

    printf("%d" ,a);
    printf("  %d",*p);

    printf("\n\n\n\n\n");
    return 0;
}
