#include <stdio.h>

int main()
{
	int pista,metros,total;
	scanf("%i %i", &pista, &metros);
	if(pista < metros)
	    total = metros - pista;
	else
	    total = pista % metros;
	printf("%i\n", total);

	return 0;
}