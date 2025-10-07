#include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%i", &n);
	int l[n+1][n+1], e[n][n];

	for(i = 0; i<n+1; i++) {
		for(j = 0; j<n+1; j++) {
			scanf("%i", &l[i][j]);
		}
	}

	for(i = 0; i<n; i++) {
		for(j = 0; j<n; j++) {
			e[i][j]=l[i][j];
			e[i][j]+=l[i+1][j];
			e[i][j]+=l[i][j+1];
			e[i][j]+=l[i+1][j+1];
		}
	}

	for(i = 0; i<n; i++) {
		for(j = 0; j<n; j++) {
			printf("%c", (e[i][j] > 1) ? 'S':'U');
		}
		printf("\n");
	}
	return 0;
}