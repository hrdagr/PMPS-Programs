#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
    printf("Enter the Length of :-");

    printf("\n1st side :");
    scanf("%d", &a);

    printf("2nd side :");
    scanf("%d", &b);

    printf("3rd side :");
    scanf("%d", &c);

    if ((a==b) && (b==c))
        {
            printf("\nIt's an Equilateral triangle\n");
        }
    else if ((a==b) || (b==c))
        {
            printf("\nIt's an Isosceles triangle\n");
        }
    else
        {
            printf("\nNope It's an irregular triangle\n");
        }

    return 0;
}
