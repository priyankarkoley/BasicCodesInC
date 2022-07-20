#include <stdio.h>
#include <stdlib.h>

int i, n;
int main()
{
    printf("Enter The Limit: ");
    scanf("%d", &n);

    printf("The Even Numbers are: ");
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        printf("  %d", i);
    }

    printf("\nThe Odd Numbers are: ");
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        printf("  %d", i);
    }
    return 0;
}
