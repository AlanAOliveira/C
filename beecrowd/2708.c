#include <stdio.h>

int main()
{   
    char movimento[7];
    int qtd,t=0,j=0;
    
    scanf("%s %i", movimento, &qtd);
    while(movimento[0]!= 'A'){
        if(movimento[0] == 'V'){
            t-=qtd;
            j--;
        }else{
            t+=qtd;
            j++;  
        }
        scanf("%s %i", movimento, &qtd);  
    }
    printf("%i\n%i\n", t,j);
    return 0;
}