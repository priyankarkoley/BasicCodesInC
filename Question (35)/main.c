#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 3: \n\n");
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=(2*i-1);j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
