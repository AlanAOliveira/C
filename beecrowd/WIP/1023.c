#include <stdio.h>
#include <math.h>

int main()
{   
    long long unsigned int casas,i,m,c;
    int cidade=0;
    double mt, ct, met;
    
    scanf("%llu", &casas);
    while(casas > 0){
        long long unsigned int consumos[201];
        for(i=0;i<200;i++)
            consumos[i] = 0;
        m = c = 0;
        mt = ct = 0.0;
        cidade++;
        for(i=0;i<casas;i++){
            scanf("%llu %llu",&m,&c);
            consumos[c/m] += m;
            mt += m;
            ct += c;
        }
        if(cidade > 1)
            printf("\n");
        printf("Cidade# %i:\n", cidade);
        int s=0;
        for(i=0;i<200;i++)
            if(consumos[i]>0){
                if(s > 0)
                    printf(" ");
                printf("%llu-%llu", consumos[i],i);
                s++;
            }
        printf("\n");
        met = ct/mt;
        printf("Consumo medio: %.2lf m3.\n", floorf(met * 100)/100);
        scanf("%llu", &casas); 
    }
    
    return 0;
}