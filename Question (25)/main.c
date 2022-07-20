#include <stdio.h>
#include <stdlib.h>

int x,n,s;
float sum=0,fact,prod;
int main()
{
    printf("SERIES 06: x-(x^3/3!)+(x^5/5!)-(x^7/7!)......+(x^n/n!) \nEnter The Value of X and The Number of Terms: ");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        prod=1;
        fact=1;
        for(int j=1;j<=2*i-1;j++)
        {
            prod*=x;
            fact*=j;
            if(i%2==0)
                s=-1;
            else
                s=1;
        }
        sum+=(s*prod/fact);
    }

    printf("\nThe Sum Of The Given Series is: %f", sum);
    return 0;
}
