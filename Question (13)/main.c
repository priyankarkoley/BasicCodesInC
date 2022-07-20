#include <stdio.h>
#include <stdlib.h>

char ch;
int main()
{
    printf("Enter A Character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("The Converted character is %c", ch-32);
    else if(ch>='A'&&ch<='Z')
        printf("The Converted character is %c", ch+32);
    else
        printf("Invalid Input");
    return 0;
}
