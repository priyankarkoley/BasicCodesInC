#include <stdio.h>
#include <stdlib.h>

int a, d, n, rev=0, i, sum=0;
int main()
{
    printf("Enter a 3digit Number: ");
    scanf("%d", &a);
    printf("The digits are: ");
    n=a;
    for(i=0;i<3;i++)
    {
        d=n%10;
        n/=10;
        sum+=d;
        rev=rev*10+d;
        printf("\t%d", d);
    }
    printf("\nThe sum is %d", sum);
    printf("\nThe Reverse is %d", rev);
    return 0;
}
