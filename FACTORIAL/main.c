#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,num,ans = 1;

    printf("Enter The Number : ");
    scanf("%d",&num);

    for(i = num; i>0; i=i-1)
    {
        printf("%d",i);
        if (i!=1)
            printf(" * ",i);
        ans = ans*i;

    }
    printf("\n\nAnswer = %d\n",ans);
        return 0;
}
