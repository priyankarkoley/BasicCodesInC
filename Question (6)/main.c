#include <stdio.h>
#include <stdlib.h>

int a,b;
int main()
{
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("\nThe swapped values are %d %d", a, b);
    return 0;
}
