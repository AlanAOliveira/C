#include <stdio.h>

int main()
{
    int n,c,m,i,j;
    char inputs[602] = "%i";
    scanf("%i %i %i", &n,&c,&m);
    int carimbadas[c], compradas[m], faltando = c;
    for(i=0;i<c;i++)
        scanf("%i", &carimbadas[i]);
    for(i=0;i<m;i++)
        scanf("%i", &compradas[i]);
    for(i=0;i<c;i++)
        for(j=0;j<m;j++)
            if(carimbadas[i] == compradas[j]){
                faltando--;
                break;
            }
    printf("%i\n", faltando);
    return 0;
}