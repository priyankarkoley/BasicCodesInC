#include <stdio.h>
#include <stdlib.h>

int n,a=0,b=1,c=0,d,i;

int main()
{
    printf("Enter the upper range of the series:");
    scanf("%d",&n);
    printf("The NON Fibonacci Numbers are: ");
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(i=c+1;i<d;i++)
        {
            if(i<=n)
            printf(" %d",i);
            else
            break;
        }
    }
 return 0;
}
