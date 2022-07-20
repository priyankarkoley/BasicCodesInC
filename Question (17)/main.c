#include <stdio.h>
#include <stdlib.h>

int a=0,b=1,c,n;
int main()
{
    printf("Enter The Limit: ");
    scanf("%d", &n);
    printf("The Fibonacci Series: %d %d",a,b);
    c=a+b;
    while(c<=n)
    {
    printf(" %d",c);
    a=b;
    b=c;
    c=a+b;
    }
    return 0;
}
