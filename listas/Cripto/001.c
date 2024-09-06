#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Cripto(char *txt1, char *txt2)
{

    strcpy(txt2, txt1);
    int i,j,k;
    char chave1[5] = "aXcde", chave2[5] = "1234x";

    for(i=0;i<strlen(txt1);i++)
        for(j=0;j<5;j++)
            if(txt1[i] == chave1[j])
                txt2[i] = chave2[j];
            else
                for(k=0;k<5;k++)
                    if(txt1[i] == chave2[k])
                        txt2[i] = chave1[k];

}
int main()
{

char texto1[9], texto2[9], texto3[9] ;

printf( "Informe um texto de ate 8 caracteres:" ) ;
scanf( "%[^\n]", texto1 ) ;

Cripto( texto1, texto2 ) ;
Cripto( texto2, texto3 ) ;

printf( "O texto criptografado eh: \n%s\n e descriptografado eh: \n%s\n", texto2, texto3 ) ;
return 0 ;
}
