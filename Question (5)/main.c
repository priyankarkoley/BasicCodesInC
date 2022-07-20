#include <stdio.h>
#include <stdlib.h>

int a,b,c;
int main()
{
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a,&b);
    c=b;
    b=a;
    a=c;
    printf("\nThe swapped values are %d %d", a, b);
    return 0;
}
