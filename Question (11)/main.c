#include <stdio.h>
#include <stdlib.h>

int a,b,c;
int main()
{
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);

	if(a<b&&a<c)
		printf("%d is smallest",a);
	else if(b<c)
        printf("%d is smallest",b);
	else
		printf("%d is smallest",c);
	return 0;
}
