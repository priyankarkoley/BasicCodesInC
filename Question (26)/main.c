#include <stdio.h>
#include <stdlib.h>

float n,sum=0;
int main()
{
    printf("SERIES 07: 1+(1/2)+(1/3)+(1/4)+...+(1/n) \nEnter The Value of Limit: ");
    scanf("%f", &n);
    for(float i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
