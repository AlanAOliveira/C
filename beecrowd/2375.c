#include <stdio.h>
int main()
{
    int d, l , a, p;
    char saida = 'S';
    scanf("%i", &d);
    scanf("%i %i %i", &l,&a,&p);
    if(d>l)
        saida = 'N';
    if(d>a)
        saida = 'N';
    if(d>p)
        saida = 'N';
    printf("%c\n", saida);
    return 0;
}