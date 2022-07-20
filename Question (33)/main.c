#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    int k=1;
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 1: \n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" %d",k++);
        }
        printf("\n");
    }
    return 0;
}
