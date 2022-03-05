#include <stdio.h>
#include <stdlib.h>
struct no
{ int a[5];
};

int main()
{
    struct no num[3];
    for(int j =0; j<3; j++)
    {
        for(int i =0; i<5; i++)
        {
            num[j].a[i]=rand();
        }
    }

    for(int p=0; p<3; p++)
    {
        printf("\nSum = %d + %d = %d",
        num[p].a[2],num[p].a[4],num[p].a[2]+num[p].a[4]);

        printf("\nDivide = %d / %d = %d",
        num[p].a[2],num[p].a[4],num[p].a[2]/num[p].a[4]);

        printf("\nMultiply = %d * %d = %d",
        num[p].a[2],num[p].a[4], num[p].a[2]*num[p].a[4]);

        printf("\ndiff = %d - %d = %d",
        num[p].a[2],num[p].a[4],num[p].a[2]-num[p].a[4]);

        printf("\n");
    }


    return 0;
}
