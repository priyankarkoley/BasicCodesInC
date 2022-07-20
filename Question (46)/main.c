#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 14: \n\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }

        for(int j=1;j<=i;j++)
        {
            printf(" %d", j);
        }

        for(int j=i-1;j>=1;j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}
