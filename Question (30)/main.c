#include <stdio.h>
#include <stdlib.h>

int num, b,d=0,base=1,rem;
int main()
{
    printf (" Enter a Binary Number: ");
    scanf (" %d", &num);
    while(num>0)
    {
        rem=num%10;
        d=d+rem*base;
        num=num/10;
        base=base*2;
    }
    printf (" \n The Number in Decimal Number System is %d.", d);
}
