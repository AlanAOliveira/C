#include <stdio.h>

int main() {

	int i,j,k, d1,d2,ct,num,cont;
	scanf("%i %i %i", &d1,&d2,&ct);
	int dado1[d1], dado2[d2];

	for(i=0; i < d1; i++)
		scanf("%i", &dado1[i]);
	for(i=0; i < d2; i++)
		scanf("%i", &dado2[i]);
	for(i=0; i<ct; i++) {
		cont = 0;
		scanf("%i", &num);
		for(j=0; j<d1; j++)
			for(k=0; k<d2; k++)
				if((dado1[j]+dado2[k]) == num)
					cont++;
		printf("%i\n",cont);
	}


	return 0;
}