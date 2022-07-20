#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 5: \n\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}
