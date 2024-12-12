#include <stdio.h>

int main()
{
    int i,numero;
    long long unsigned int total = 0;
    scanf("%i", &numero);
    total = numero;
    for(i=numero-1;i>1;i--){
        total *= i;
    }
    printf("%llu\n", total);
        
    return 0;
}