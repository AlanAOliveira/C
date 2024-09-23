#include <stdio.h>
int main()
{
	int i,n,casos;
	unsigned long long int x, y ,z;
	scanf("%i", &casos);
	while(casos > 0) {
	    x = 0; y = 1; z = 0;
		scanf("%i", &n);
		for(i=2; i<=n; i++) {
		    x = y + z;
		    z = y;
		    y = x;
		}
		if(n == 1)
		x = 1;
	    printf("Fib(%i) = %llu\n",n,x);
		casos--;
	}
	return 0;
}