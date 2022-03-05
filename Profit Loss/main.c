#include<stdio.h>

int main() {
    int cp,sp,pl;
    float per;
    printf("Enter Cost Price :");
    scanf("%d", &cp);

    printf("Enter Selling Price :");
    scanf("%d", &sp);

    pl = cp - sp;

    if (pl<0)
        {
            pl = sp - cp;
            printf("It's Profit of %d", pl);
            per = pl*100/cp;
            printf("\nPercent = %.2f\n", per);
        }
    else if (pl>0)
        {
            pl = sp - cp;
            printf("It's Loss of %d", pl);
            per = pl*100/cp;
            printf("\nPercent = %.2f\n", per);
        }
    else if (pl == 0)
        {
            printf("No Profit No Loss\n");
        }

    return 0;
}
