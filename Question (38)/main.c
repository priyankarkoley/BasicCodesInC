#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 6: \n\n");
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}
