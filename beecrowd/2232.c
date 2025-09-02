#include <stdio.h>
#include <math.h>

int main()
{
    int casos;
    scanf("%i", &casos);
    long int resp[casos];
    for(int i = 0;i<casos;i++){
        scanf("%li", &resp[i]);
        resp[i] = pow(2,resp[i])-1;
    }
        
    for(int i = 0;i<casos;i++)
        printf("%li\n", resp[i]);
    
    return 0;
}