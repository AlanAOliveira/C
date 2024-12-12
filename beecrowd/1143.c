#include <stdio.h>

int main()
{
	int i,numero;
	scanf("%i", &numero);
	for(i=1;i<=numero;i++)
	    printf("%i %i %i\n",i,i*i,i*i*i);
	return 0;
}