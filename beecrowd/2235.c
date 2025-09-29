#include <stdio.h>

int main()
{
    int a,b,c;
    char saida = 'N';
    
    scanf("%i %i %i", &a, &b,&c);
    if(a == b || a==c || b == c)
    saida = 'S';
    if(a == b + c || b == a + c || c == a + b)
    saida = 'S';
    printf("%c\n", saida);

    return 0;
}