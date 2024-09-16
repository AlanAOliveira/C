//WIP

#include <stdio.h>

int main() {

	int i,j,k,tempo, totpiz,temp, max, pedidos;
	float entregas[20][3];
	scanf("%i", &pedidos);

	while(pedidos>0) {
		tempo = 0;
		totpiz = 0;
		scanf("%i", &max);

		for(i=0; i<pedidos; i++) {
			scanf("%f %f", &entregas[i][0],&entregas[i][1]);
			entregas[i][2] = ((1.0 * entregas[i][0]) / entregas[i][1]);
		}


		for(i=1; i<pedidos; i++)
			for(j=1; j<pedidos; j++)
				if(entregas[j][0]<entregas[j-1][0])
					for(k=0; k<3; k++) {
						temp = entregas[j-1][k];
						entregas[j-1][k] = entregas[j][k];
						entregas[j][k] = temp;
					}

		for(i=0; i<pedidos; i++)
		printf("%.2f,%.2f,%.2f\n", entregas[i][0],entregas[i][1],entregas[i][2]);
		
		for(i=0; i<pedidos; i++)
			if(totpiz + entregas[i][1] <= max) {
				tempo += entregas[i][0];
				totpiz += entregas[i][1];
			}
		printf("%i min.\n", tempo);


		scanf("%i", &pedidos);
	}

	return 0;
}