#include <stdio.h>

int main()
{
	int nota;
	char letra;
	scanf("%i", &nota);

	if(nota<1) {
		letra = 'E';
	} else if(nota<36) {
		letra = 'D';
	} else if(nota<61) {
		letra = 'C';
	} else if(nota<86) {
		letra = 'B';
	} else {
		letra = 'A';
	}
	printf("%c\n", letra);


	return 0;
}