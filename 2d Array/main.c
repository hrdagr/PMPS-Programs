#include <stdio.h>
#include <stdlib.h>

int main()
{   int arr[3][3];

    printf("An 3x3 Matrix\n\n");

     for(int j=0; j<3; j++)
    {
        for(int i=0; i<3; i++)
        {
            printf("Enter Value for %dx%d :",j+1,i+1);
            scanf("%d",&arr[j][i]);
        }
    }
    printf("\nThe Resultant Matrix is :- \n");
     for(int k=0; k<3; k++)
    {
        for(int l=0; l<3; l++)
        {
            printf("%d",arr[k][l]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
