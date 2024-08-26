#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int n,z,x,c,y,f,
	letras[26]= {
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	};
	char texto[200];

	scanf("%i", &n);

	for(z=0; z<n; z++) {
		scanf(" %[^\n]s", texto);
		for(x=0; x<strlen(texto); x++) {
			texto[x] = tolower(texto[x]);
			c = texto[x];
			if(c>=97 && c<=122)
				letras[c-97]++;
		}
		f=0;
		for(y=0; y<26; y++)
			if(f<letras[y])
				f = letras[y];

		for(y=0; y<26; y++){
			if(letras[y] == f) 
				printf("%c", y+97);
		letras[y] = 0;	
		}	
		printf("\n");

	}




	return 0;
}