#include <stdio.h>
#include <string.h>

char * gerasenha(char * RA){
    int i,j;
    if(RA[0] != 'R')
        return "INVALID DATA";
    if(RA[1] != 'A')
        return "INVALID DATA";
    if(strlen(RA)!=20)
        return "INVALID DATA";
    for(i=2;i<21;i++)
        if(RA[i] != '0'){
            j=i;
            break;
        }
    if(j==20)
        return "INVALID DATA";  
    
    return RA+j;
}

int main()
{
    int casos,i;
    char Registro[21], * RA = Registro ;
    scanf("%i", &casos);
    for(i=0;i<casos;i++){
        scanf("%s", RA);
        printf("%s\n",gerasenha(RA));
    }
    return 0;
}