#include <stdio.h>

int main()
{   
    int x, y;
    scanf("%i %i", &x, &y);
    while(x!=y){
        printf("%s\n", x<y?"Crescente":"Decrescente");
        scanf("%i %i", &x, &y);
    }
    return 0;
}