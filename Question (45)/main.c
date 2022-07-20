#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);
    printf("Printing Pattern 13: ");
    for(int i=0;i<=n+1;i++)
    {
        for(int j=1;j<i;j++)
        {
            if((i+j)%2==0)
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
        }
        printf("\n");
    }
    return 0;
}
