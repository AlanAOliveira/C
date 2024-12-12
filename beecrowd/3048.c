#include <stdio.h>

int main()
{
    int i,casos,total = 0, a = 2,b;
    scanf("%i", &casos);
    for(i=0;i<casos;i++){
        scanf("%i", &b);
        if(b!=a)
            total++;
        a = b;
    }
    printf("%i\n", total);
        
    return 0;
}