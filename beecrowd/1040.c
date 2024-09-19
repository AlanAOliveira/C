#include <stdio.h>

int main()
{
    float notas[4],media=0,exame;
    int i,pesos[4] ={2,3,4,1};
    
    scanf("%f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3]);
    for(i=0;i<4;i++)
        media += 1.0 * notas[i] * pesos[i] / 10; 
    printf("Media: %.1f\n", media);    
    if(media >= 7)
    printf("Aluno aprovado.\n");
    else if(media >=5){
        printf("Aluno em exame.\n");
        scanf(" %f",&exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (media+exame)/2;
        if(media >= 5.0)
        printf("Aluno aprovado.\n");
        else
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", media);
    }
    else
    printf("Aluno reprovado.\n");

    return 0;
}