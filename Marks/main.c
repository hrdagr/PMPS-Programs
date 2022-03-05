#include <stdio.h>
#include <stdlib.h>

int main()
{   float a, b, c, d, total = 0.0, per = 0.0 ;
    printf("Enter Marks Of :- \n");

    printf("English : ");
    scanf("%f", &a);

    printf("PMPS : ");
    scanf("%f", &b);

    printf("BCEM : ");
    scanf("%f", &c);

    printf("Chem : ");
    scanf("%f", &d);

    total = a+b+c+d;
    per = total/4;

    printf("\nTotal Marks : %f", total);
    printf("\nPercent : %f", per);

    if (per > 33)
        {
           printf("\nPASS\n\n");
        }
    else
           printf("\nFAIL\n\n");
    return 0;
}
