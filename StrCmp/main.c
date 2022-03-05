#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[9] = "Hriddhesh";
    char str2[7] = "Agrawal";

    if (strcmp(str1,str2)==1)
    {
        printf("Both strings are equal\n\n");
    }
    else
    {
        printf("Both strings are unequal\n\n");
    }

    return 0;
}
