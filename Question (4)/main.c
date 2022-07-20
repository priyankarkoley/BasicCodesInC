#include <stdio.h>
#include <stdlib.h>

float fa, ce;
int main()
{
    printf("Enter Temperature in fahrenheit: ");
    scanf("%f", &fa);
    ce=(fa-32)*5/9;
    printf("\nThe Tempertaure in celsius is %f", ce);
    return 0;
}
