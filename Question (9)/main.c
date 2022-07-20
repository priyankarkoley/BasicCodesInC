#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter a Number to check: ");
    scanf("%d", &n);
    if(n%2==0)
        printf("%d is an EVEN number", n);
    else
        printf("%d is an ODD number", n);
    return 0;
}
