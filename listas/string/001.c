#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int i,j, cont = 0;
	char palavra[200], vogais[5] = {'a','e','i','o','u'}, letra;

	scanf("%[^\n]s", palavra);
	scanf(" %c", &letra);

	for(i=0; i<strlen(palavra); i++)
		for(j=0; j<5; j++)
			if(tolower(palavra[i]) == vogais[j])
				cont++;

	printf("\nna string %s, existem %i vogais\n", palavra, cont);

	for(i=0; i<strlen(palavra); i++)
		for(j=0; j<5; j++)
			if(tolower(palavra[i]) == vogais[j])
				palavra[i] = letra;
				
	printf("string com vogais subistituidas %s", palavra);			

	return 0;
}