#include <stdio.h>
#include <stdlib.h>

int main()
{   int arr[10], n=0, n2 ;

    for(int i=0; i<10; i++)
    {
         printf("Enter no. %d :",i+1);
         scanf("%d", &arr[i]);
    }

    for(int j=0; j<10; j++)
    {
        if(arr[j]>n)
            n = arr[j];
    }
    n2 = arr[0];
    for(int k=0; k<10; k++)
    {
        if(arr[k]<n2)
            n2 = arr[k];
    }

    printf("\nThe Greatest Number is %d\n", n);
    printf("\nThe Smallest Number is %d\n", n2);

    return 0;
}
