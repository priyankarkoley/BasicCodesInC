#include <stdio.h>
#include <stdlib.h>

float i,n,prod=1,sum=0;
int j;
int main()
{
    printf("SERIES 10: 1+(2^2/2)+(3^3/3)+(4^4/4)+...+(n^n/n) \nEnter The Value of Limit: ");
    scanf("%f", &n);
    for(i=1;i<=n;i=i+1)
    {
        prod=1;
        for(j=1;j<=i;j++)
        {
            prod*=i;
        }
        sum+=(prod)/i;
    }
    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
