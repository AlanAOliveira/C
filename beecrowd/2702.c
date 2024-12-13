#include <stdio.h>
int main()
{
    int f,b,m,fr,br,mr, total = 0;
    scanf("%i %i %i", &f, &b, &m);
    scanf("%i %i %i", &fr, &br, &mr);
    
    total += fr < f ? 0 : fr - f;
    total += br < b ? 0 : br - b;
    total += mr < m ? 0 : mr - m;
    
    printf("%i\n", total);
    return 0;
}