#include <stdio.h>
#include <stdlib.h>

int a;
int main()
{
    printf("Enter a Number to check: ");
    scanf("%d", &a);
    if(a>0)
        printf("%d is a Positive Number", a);
    else if(a==0)
        printf("%d is a equal to ZERO", a);
    else
        printf("%d is a Negative Number", a);
    return 0;
}
