#include <stdio.h>
int main()
{
	float valortotal, moedas[6] = {1.0,0.5,0.25,0.10,0.05,0.01};
	int i, notas = 0,cedulas[7] = {100,50,20,10,5,2};

	scanf("%f", &valortotal);
	//tem um erro de precisão float quando chega nas modeas de 1 cent
	//esse 0.001 extra corrige o calculo mas não interfere nos valores
	valortotal += 0.001;
    printf("NOTAS:\n");
	for(i=0; i<6; i++) {
		notas = valortotal/cedulas[i];
		valortotal -=(notas * cedulas[i]);
		printf("%i nota(s) de R$ %i.00\n", notas, cedulas[i]);
	}
	printf("MOEDAS:\n");
	for(i=0; i<6; i++) {
		notas = valortotal/moedas[i];
		valortotal -=(notas * moedas[i]);
		printf("%i moeda(s) de R$ %.2f\n", notas, moedas[i]);
	}
	return 0;
}