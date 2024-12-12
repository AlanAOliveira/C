#include <stdio.h>
#include <string.h>

int main()
{
    int tam,i;
    char texto[200000];
    scanf("%i", &tam);
    scanf(" %[^\n]", texto);
    for(i=0;i<strlen(texto);i++)
        if((texto[i] >= 'A' && texto[i] <= 'Z') 
        && (texto[i-2] == 'U' ||texto[i-2] == 'O') 
        && (texto[i-1] == 'B' || texto[i-1] == 'R') 
        && (texto[i+1] == ' ' || texto[i+1] == '\0')
        && !(texto[i-3] >= 'A' && texto[i-3] <= 'Z'))
            printf("I");
        else
            printf("%c", texto[i]);
    printf("\n");        
    return 0;
}