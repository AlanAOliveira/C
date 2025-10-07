#include <stdio.h>

int main()
{
	int n,i;
	scanf("%i", &n);
	int g[n][2];
	
	for(i=0; i<n; i++) {
		scanf("%i %i", &g[i][0],&g[i][1]);
	}
	
	for(i=0; i<n; i++) {
		printf("%i\n", g[i][0]/g[i][1] + g[i][0]%g[i][1]);
	}


	return 0;
}