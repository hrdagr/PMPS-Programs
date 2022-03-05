#include <stdio.h>
#include <stdlib.h>

int main()
{   int arr[3][3], arr2[3][3], r[3][3];

    printf("An 1st 3x3 Matrix\n\n");

     for(int j=0; j<3; j++)
    {
        for(int i=0; i<3; i++)
        {
            printf("Enter Value for %dx%d :",j+1,i+1);
            scanf("%d",&arr[j][i]);
        }
    }

    printf("An 2st 3x3 Matrix\n\n");

     for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            printf("Enter Value for %dx%d :",x+1,y+1);
            scanf("%d",&arr2[x][y]);
        }
    }

    for(int e=0; e<3; e++)
    {
        for(int f=0; f<3; f++)
        {
            r[e][f]= arr[e][f] + arr2[e][f];
        }
        printf("\n");
    }

    printf("The Resultant Matrix is :-\n");
     for(int k=0; k<3; k++)
    {
        for(int l=0; l<3; l++)
        {
            printf("%d",r[k][l]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
