#include <stdio.h>

int main()
{   
    float total = 0.0, idade, casos = 0.0;
    
    scanf("%f", &idade);
    while(idade>0){
        total += idade;
        casos++;
        scanf("%f", &idade);
    }
    
    printf("%.2f\n",total/casos);
    return 0;
}