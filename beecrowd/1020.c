#include <stdio.h>

int main()
{   
    int totaldias, anos = 0, meses = 0, dias = 0;
    
    scanf("%i", &totaldias);
    anos = totaldias/365;
    meses = (totaldias%365)/30; 
    dias = (totaldias%365)%30;
    
    
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}