#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[50];

    printf("Enter String (Max 50) :- ");
    gets(str);
    for(int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
            printf("%c",toupper(str[i]));

        else if(str[i] == 'e')
            printf("%c",toupper(str[i]));

        else if(str[i] == 'i')
            printf("%c",toupper(str[i]));

        else if(str[i] == 'o')
            printf("%c",toupper(str[i]));

        else if(str[i] == 'u')
            printf("%c",toupper(str[i]));

        else
            printf("%c",str[i]);
    }
    printf("\n\n\n\n");
}
