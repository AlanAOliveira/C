#include <stdio.h>

int main()
{
    float n1,n2, aux = -1;
    
    while(aux == -1){
        scanf("%f",&aux);
        if(aux>=0 && aux<=10){
            n1 = aux;
        }else{
            printf("nota invalida\n");
            aux = -1;
        }
    }
    
    aux = -1;
    
    while(aux == -1){
        scanf("%f",&aux);
        if(aux >= 0 && aux <= 10){
            n2 = aux;
        }else{
            printf("nota invalida\n");
            aux = -1;
        }
    }
    
    printf("media = %.2f\n", (n1+n2)/2);
    return 0;
}