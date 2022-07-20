#include <stdio.h>
#include <stdlib.h>

float n,sum=0;
int main()
{
    printf("SERIES 08: 1+(1/2^2)+(1/3^2)+(1/4^2)+...+(1/n^2) \nEnter The Value of Limit: ");
    scanf("%f", &n);
    for(float i=1;i<=n;i=i+1)
    {
        sum+=1/(i*i);
    }
    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
