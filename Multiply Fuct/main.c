#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
    printf("Enter 1st no. :");
    scanf("%d",&a);

    printf("Enter 2nd no. :");
    scanf("%d",&b);

   c = multi(a,b);

    printf("\nAnswer of a x b = %d\n",c);

    return 0;
}

int multi(int x, int y)
{
    return(x*y);
}
