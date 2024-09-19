#include <stdio.h>

int main()
{
	int i,valortotal, notas = 0,cedulas[7] = {100,50,20,10,5,2,1};

	scanf("%i", &valortotal);
	printf("%i\n",valortotal);

	for(i=0; i<7; i++) {
		notas = valortotal/cedulas[i];
		valortotal -=(notas * cedulas[i]);
		printf("%i nota(s) de R$ %i,00\n", notas, cedulas[i]);
	}

	return 0;
}