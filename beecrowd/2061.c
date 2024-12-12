#include <stdio.h>

int main()
{
	int i,n,m;
	char acao[7];
	scanf("%i %i", &n,&m);
	for(i=0;i<m;i++){
	    scanf("%s", acao);
	    if(acao[0] == 'f')
	    n++;
	    else
	    n--;
	}
	printf("%i\n", n);
	    
	

	return 0;
}