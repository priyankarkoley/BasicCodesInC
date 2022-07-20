#include <stdio.h>
#include <stdlib.h>

float n,sum=0;
int main()
{
    printf("SERIES 09: (1/2)+(2/3)+(3/4)+...+(n/n+1) \nEnter The Value of Limit: ");
    scanf("%f", &n);
    for(float i=1;i<=n;i=i+1)
    {
        sum+=i/(i+1);
    }
    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
