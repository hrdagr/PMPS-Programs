#include <stdlib.h>
#include<stdio.h>

int main ()
{
    int a = 10;
    int *pt;
    int **ppt;
    pt = &a;
    ppt = &pt;
    printf("address of a: %x\n",pt);
    printf("address of p: %x\n",ppt);
    printf("value stored at p: %d\n",*pt);
    printf("value stored at pp: %d\n",**ppt);

    return 0;
}
