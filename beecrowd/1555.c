#include <stdio.h>

int main()
{
    int i,n, x, y, resp[3];
    
    scanf("%i", &n);
    for(i=0;i<n;i++){
        scanf("%i %i",&x,&y);
        resp[0] = (3*x)*(3*x) + (y*y);
        resp[1] = 2*(x*x) + ((5*y)*(5*y));
        resp[2] = -100*x + (y*y*y);
        if(resp[0]>resp[1] && resp[0]>resp[2])
            printf("Rafael ganhou\n");
        if(resp[1]>resp[0] && resp[1]>resp[2])
            printf("Beto ganhou\n");
        if(resp[2]>resp[1] && resp[2]>resp[0])
            printf("Carlos ganhou\n");
    }

    return 0;
}