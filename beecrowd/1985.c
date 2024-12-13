#include <stdio.h>
int main()
{
    int casos, i, prod, qtd;
    float total=0.0;
    
    scanf("%i", &casos);
    for(i=0;i<casos;i++)
    {
        scanf("%i %i", &prod, &qtd);
        total += (prod - 999.5) * qtd ;
    }
    printf("%.2f\n", total);
    
    return 0;
}