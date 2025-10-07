#include <stdio.h>

int main()
{
	int n, sa,sb,la,lb;
	
	scanf("%i", &n);
	scanf("%i %i", &sa, &sb);
	scanf("%i %i", &la, &lb);
	printf("%spossivel\n",(n>sa-1 && n<sb+1 && n>la-1 && n<lb+1)? "": "im");

	return 0;
}