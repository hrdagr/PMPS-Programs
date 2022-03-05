#include <stdio.h>
#include <stdlib.h>

int main()
{   int marks[2], sum;

    for(int i = 0; i<3; i++)
    {
        printf("Enter Marks for Subject No. %d :", i+1);
        scanf("%d", &marks[i]);
    }
    sum = marks[0]+marks[1]+marks[2];
    printf("\nSum of all Marks = %d+%d+%d = %d\n", marks[0], marks[1], marks[2], sum);

    if (sum/3>60)
    {
        printf("\nFirst Division\n");
    }
    else if(sum/3>40)
    {
        printf("\nSecond Division\n");
    }
    else
    {
        printf("\nFAIL\n");
    }


    return 0;
}
