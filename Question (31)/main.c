#include <stdio.h>
#include <stdlib.h>

int n1, n2, i, g;
int main()
{
    printf("Enter any two numbers: \n");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i)
    {
        if(n1%i==0&&n2%i==0)
        g=i;
    }
    printf ("The GCD of Two Numbers %d and %d is %d.", n1, n2, g);
    return 0;
}
