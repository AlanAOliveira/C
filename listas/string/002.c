#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,j, cont = 0;
    char palavra[200], letra;
    
    scanf("%s", palavra);
    scanf(" %c", &letra);
    
    for(i=0;i<strlen(palavra);i++)
       if(tolower(palavra[i]) == letra)
            cont++;        
    
    
    printf("na string %s, existem %i letras %c", palavra, cont, letra);

    return 0;
}