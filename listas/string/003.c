#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i,z=0;
    char palavra[200], letra;
    
    scanf("%[^\n]s", palavra);
    
    int indexes[strlen(palavra)];
    
    scanf(" %c", &letra);
    
    for(i=0;i<strlen(palavra);i++)
       if(tolower(palavra[i]) == tolower(letra)){
            indexes[z] = i;
            z++;
       }

    printf("\nV=[");    
    for(i=0;i<z;i++)
        printf(" %i ", indexes[i]);
    printf("]");    

    return 0;
}