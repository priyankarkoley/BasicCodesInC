#include <stdio.h>
#include <stdlib.h>

int n, i, fact=1;
int main()
{
    printf("Enter a Number to Calculate Factorial: \n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }

    printf("The Factorial of %d is (%d!=) %d",n,n,fact);
    return 0;
}
