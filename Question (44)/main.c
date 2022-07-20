#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 12: \n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int j=n-i;j<=n;j++)
        {
            printf(" %d", j);
        }

        for(int j=n-1;j>=n-i;j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}
