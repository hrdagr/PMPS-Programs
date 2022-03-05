#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char str[50],str2[50];
    int j = 0;

    printf("Enter String (Max 50) :- \n");
    gets(str);
    for(int i = strlen(str)-1; i>= 0; i--)
    {
            str2[j] = str[j];
            ++j;
    }

    if(str == str2)
        printf("AAAAAAA");
}
