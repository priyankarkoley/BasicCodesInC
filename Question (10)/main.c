#include <stdio.h>
#include <stdlib.h>

float a,b;
char ch;
int main()
{
    printf("Enter The Operator: ");
    scanf("%c",&ch);
    printf("Enter Two Numbers: ");
    scanf("%f",&a);
    scanf("%f",&b);

    switch(ch)
    {
        case '+':
        printf("The Result is %f", a+b);
        break;

        case '-':
        printf("The Result is %f", a-b);
        break;

        case '*':
        printf("The Result is %f", a*b);
        break;

        case '/':
        printf("The Result is %f", a/b);
        break;

        default:
        printf("Invalid Choice");
    }
}
