#include <stdio.h>
#include <string.h>

void removedigito(char *p, char l)
{
	int i = 0, j = 0;

	while (p[j]) {
		if (p[j]!=l) {
			p[i++] = p[j];
		}
		j++;
	}
	p[i]=0;
}

int zeroaesquerda(char *p) {
	int i,j=0;
//	printf("tamanho da string:%i\n", strlen(p));
	for (i = 0; i < strlen(p); i++) {
		if (p[i] == '0') {
			j++;
		} else {
			break;
		}
	}
	j = (j == strlen(p)) ? j-1 : j;
	return j;
}

int main()
{
	int i = 0;
	char d, n[102], cut[102];

	scanf(" %c %s",&d, n);
	while(d != '0' || n[0] !='0') {
		//printf("digito %c e numero:%s\n", d, n);
		removedigito(n, d);
		//printf("numero sem digito:%s\n",n);
		i = zeroaesquerda(n);
		if(i != -1)
		printf("%s\n",&n[i]);
		else
		printf("0\n");
		
		scanf(" %c %s",&d, n);
	}




	return 0;
}