#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;

    //EQUAL CHECK

    printf("Enter 1st Number :");
    scanf("%d",&a);

    printf("Enter 2nd Number :");
    scanf("%d",&b);

    if (a==b)
        printf("\nEqual\n");
    else
        printf("\nNot Equal\n");

    return 0;
}
