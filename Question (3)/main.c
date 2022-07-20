#include <stdio.h>
#include <stdlib.h>

int a,b;
int main()
{
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a,&b);
    printf("\nThe subtracted value is %d", a-b);
    printf("\nThe multiplied value is %d", a*b);
    printf("\nThe divided value is %f", (float)a/b);
    return 0;
}
