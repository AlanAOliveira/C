#include <stdio.h>

int cmp(int * num1, int * num2){
    return (*num1 == *num2) ? 0 : (*num1 < *num2) ? -1 : 1;
}

void printvet(int * vet, int tam,int ordem){
    int i;
    if(ordem == 0)
        for(i=0;i<tam;i++){
            if(vet[i]%2==0)
                printf("%i\n",vet[i]);
        }
    else
        for(i=tam-1;i>=0;i--){
            if(vet[i]%2!=0)
                printf("%i\n",vet[i]);
        }   
    
}

int main(){
    int i,casos,num;
    scanf("%i", &casos);
    int vet[casos];
    for(i=0;i<casos;i++){
        scanf("%i", &vet[i]);
    }
    
    /*  nessa pra não dar time out eu usei a função qsort 
        no caso ela funciona assim
        qsort(
            vetor a ser organizado,
            tamanho do vetor,
            tamanho do item - nesse caso aqui é so usar sizeof(elemento)
            eu usee int por que é um vetor de int mas se for algum outro tipo é so voce usar
            o mesmo tipo de dado que voce usou no vetor,
            cmp é a funçãoq eu compara os 2 elementos e diz se o primeiro é maior return 1, menor return -1
            ou se sao iguais return 0             
        )
    */
    qsort(vet,casos,sizeof(int),cmp);

    printvet(vet,casos,0);
    printvet(vet,casos,1);
    

    return 0;
}