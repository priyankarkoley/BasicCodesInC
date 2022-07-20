#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 8: \n\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
        printf(" *");
       // j++;
        }
    printf("\n");
    }
return 0;
}
