#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 7: \n\n");
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
return 0;
}
