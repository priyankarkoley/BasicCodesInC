#include <stdio.h>
#include <stdlib.h>

int x,n,sum=1,prod;
int main()
{
    printf("SERIES 01: 1+x+x^2+x^3+x^4+x^5+x^6......+x^n\nEnter The Value of X and The Limit: ");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        prod=1;
        for(int j=1;j<=i;j++)
        {
            prod*=x;
        }
        sum+=prod;
    }
    printf("\nThe Sum Of The Given Series is: %d", sum);
    return 0;
}
