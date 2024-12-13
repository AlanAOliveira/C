#include <stdio.h>
#include <string.h>

char * find(float x, float y){
    if(x == 0 && y == 0)
        return "Origem";    
    if(y == 0)
        return "Eixo X";
    if(x == 0)
        return "Eixo Y";
    if(x > 0 && y > 0)
        return "Q1";
    if(x > 0 && y < 0)
        return "Q4";
    if(x < 0 && y < 0)
        return "Q3";
    if(x < 0 && y > 0)
        return "Q2";
        
}

int main()
{
    char saida[7];
    float x,y;
    scanf("%f %f",&x,&y);
    strcpy(saida,find(x,y));
    printf("%s\n", saida);
    return 0;
}