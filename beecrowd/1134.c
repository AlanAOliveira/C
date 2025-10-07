#include <stdio.h>

int main()
{
	int i, comb[3];
    comb[0] = comb[1] = comb[2] = 0;
	scanf("%i", &i);
	while(i!=4) {
		if(i<4)
			comb[i-1]++;
		scanf("%i", &i);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %i\n",comb[0]);
	printf("Gasolina: %i\n",comb[1]);
	printf("Diesel: %i\n",comb[2]);

	return 0;
}