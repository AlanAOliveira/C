#include <stdio.h>

int main()
{   
    int n,i, resp[5],letra;
    scanf("%i", &n);
    while(n>0){
        while(n>0){
            scanf("%i %i %i %i %i", &resp[0],&resp[1],&resp[2],&resp[3],&resp[4]);
            letra = 64;
            for(i=0;i<5;i++){
                if(resp[i]<= 127 && letra == 64)
                letra = 65+i;
                else if(resp[i]<= 127 && letra != 64)
                letra = '*';
            }
            printf("%c\n", letra==64?'*':letra);
            n--;
        }
        scanf("%i", &n);   
    }
    return 0;
}