#include <stdio.h>
#include <string.h>

void corta(char * bac, char* grupo, int index, int * last){
    int i,j;
    char inicio = bac[index];
    for(i=index,j=0;i<strlen(bac) - index; i++){
        if(inicio == bac[i]){
        grupo[j] = bac[i];
        j++;
        }else{
            grupo[j] = '\0';
            last = j+index;
            return;
        }
    }
}

int main()
{   
    char entradas[6][4], saidas[6][4], bac[200] = "AAAB", grupo[200];
    int i,n,m,last;
    scanf("%i %i", &n,&m);
    for(i=0;i<m;i++)
        scanf("%s %s", entradas[i], saidas[i]);
    
    corta(bac, grupo,0,&last);
    printf("%i\n", last);
    return 0;
}