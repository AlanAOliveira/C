#include <stdio.h>
#include <math.h>

int main()
{
	int casa, testes,i;
	unsigned long long int total;

	scanf("%i", &testes);
	for(i=0; i<testes; i++) {
		scanf("%i", &casa);
		total = pow(2,casa)/12000;
		printf("%llu kg\n", total);
	}
	return 0;
}