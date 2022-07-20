#include <stdio.h>
#include <stdlib.h>

int i,n,m,flag=0;
int main()
{
    printf("Enter a Number to Check: ");
    scanf("%d", &n);
    m=(n/2);
    if(n==0||n==1)
    printf("%d is not a prime number",n);
    else
    {
        for(i=2;i<=m;i++)
        {
            if(n%i==0)
            {
                printf(" %d is not a prime number",n);
                flag=1;
                break;
            }
        }
    if(flag==0)
    printf("%d is a prime number",n);
    }

}
