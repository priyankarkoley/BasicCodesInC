#include <stdio.h>
#include <stdlib.h>

int n, temp, sum=0, d, fact;
int main()
{
    printf("Enter a Number to Check: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp % 10;
        fact=1;
        for(int i=1;i<=d;i++)
        {
            fact*=i;
        }
        sum+=fact;
        temp/= 10;
    }
    if(sum==n)
        printf("%d is a Krishnamurthy Number.",n);
    else
        printf("%d is not a Krishnamurthy Number.",n);
    return 0;
}
