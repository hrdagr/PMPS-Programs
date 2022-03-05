#include <stdio.h>
#include <stdlib.h>

int main()
{   int index = -1,arr[10],a;

    printf("Enter Value for 10 element array\n\n");


    for(int i = 0; i<10; i++)
    {
        printf("Enter value for Element %d :", i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search : ");
        scanf("%d",&a);

    for(int j = 0; j < 10; j++)
        if (arr[j] == a)
            index = j;

    if(index != -1)
        printf("\nElement Found at index %d\n\n", index);

    return 0;
}
