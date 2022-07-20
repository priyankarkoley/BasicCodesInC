#include <stdio.h>
#include <stdlib.h>

int n,k=1;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 10: \n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" %c",j+65);
        }
        printf("\n");
    }
    return 0;
}
