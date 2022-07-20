#include <stdio.h>
#include <stdlib.h>

int n, i, t, sum;
int main()
{
    printf("SERIES 05: 1+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)+...+(1+2+...+n)  \nEnter The Value of Limit: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        t+=i;
        sum+=t;
    }
    printf("\nThe Sum Of The Given Series is: %d", sum);
    return 0;
}
