#include <stdio.h>
#include <stdlib.h>

char ch;
int main()
{
    printf("Enter A Character: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is A Vowel.",ch);
    else
        printf("%c is Not A Vowel",ch);
    return 0;
}
