#include <stdio.h>
#include <stdlib.h>

float fact(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("\nFactorial of %d = %f", n, fact(n));
    return 0;
}

float fact(int n) {
    if (n>=1)
    {   if(n>1)
            printf("%d*",n);
        else
            printf("%d",n);

        return n*fact(n-1);
    }
    else
        return 1;
}
