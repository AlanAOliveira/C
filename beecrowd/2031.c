#include <stdio.h>

int main()
{
    int i, casos,p1,p2;
    char jog1[7], jog2[7];
    scanf("%i", &casos);
    for(i=0; i< casos;i++){
        scanf("%s", jog1);
        scanf("%s", jog2);
        p1=jog1[1];
        p2=jog2[1];
        if(p1==p2 && p1 == 'a')
        printf("Ambos venceram\n");
        if(p1==p2 && p1 == 'e')
        printf("Sem ganhador\n");
        if(p1==p2 && p1 == 't')
        printf("Aniquilacao mutua\n");
        if(p1>p2)
        printf("Jogador 1 venceu\n");
        if(p1<p2)
        printf("Jogador 2 venceu\n");
    }
    

    return 0;
}