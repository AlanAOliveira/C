#include <stdio.h>

int main()
{
	int a,b,c;
	char r = 'N';
	scanf("%i %i %i", &a,&b,&c);
	if((b/a)>=c)
	    r = 'S';
	printf("%c\n", r);
	return 0;
}