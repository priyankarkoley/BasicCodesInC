#include <stdio.h>
#include <stdlib.h>

int x,n,s;
float sum=0,prod=1;
int main()
{
    printf("SERIES 04: -x+(x^2)-(x^3)+(x^4)-(x^5)+(x^6)......+(x^n) \nEnter The Value of X and The Limit: ");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        prod*=x;
        if(i&2!=0)
        s=-1;
        else
        s=+1;
        sum+=(s*prod);
    }

    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
