#include <stdio.h>
#include <stdlib.h>

int greatest(int x[10]);
int smallest(int y[10]);
int main()
{int a[10];
    printf("Enter any 10 Numbers :-\n");

    for(int i=0; i<10; i++){
        printf("Enter no. %d :", i+1);
        scanf("%d",&a[i]);}
    printf("\nGreatest number is : %d", greatest(a));
    printf("\nSmallest number is : %d", smallest(a));
    return 0;
}
    int greatest(int x[10])
    {
        int t = x[0];
        for(int i=0; i<10; i++)
        {
          if (x[i] > t)
            t = x[i];
        }
        return t;
    }
    int smallest(int y[10])
    {
        int t = y[0];
        for(int i=0; i<10; i++)
        {
          if (y[i] < t)
            t = y[i];
        }
        return t;
    }


