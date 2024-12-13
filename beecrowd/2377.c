#include <stdio.h>
int main()
{
    int l,d,k,p;
    scanf("%i %i",&l,&d);
    scanf("%i %i",&k,&p);
    printf("%i\n", (l/d) * p + l * k);
    return 0;
}