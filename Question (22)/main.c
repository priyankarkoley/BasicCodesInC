#include <stdio.h>
#include <stdlib.h>

int x,n;
float s,sum=1,fact=1,prod=1;
int main()
{
    printf("SERIES 03: 1-x+(x^2/2!)-(x^3/3!)+(x^4/4!)-(x^5/5!)+(x^6/6!)......+(x^n)/n! \nEnter The Value of X and The Limit: ");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        prod*=x;
        fact*=i;
        if(i%2!=0)
        s=-1;
        else
        s=+1;
        sum+=(s*prod/fact);
    }
    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
