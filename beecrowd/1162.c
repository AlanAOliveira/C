#include <stdio.h>

int issorted(int * arr, int tam){
    int j,ret = 1;
    for(j=1;j<tam;j++)
        if(arr[j]<arr[j-1])
            ret=0;
    return ret;
}

int sort(int * arr, int tam){
    int j,ret = 0,temp;
    for(j=1;j<tam;j++)
        if(arr[j]<arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            ret += 1;
        }
    return ret;
}

int main()
{
    int i,s,v, casos;
    scanf("%i", &casos);
    
    while(casos >0){
        s=0;
        scanf("%i", &v);
        int vagoes[v];
        for (i=0;i<v;i++)
			scanf("%d",&vagoes[i]);
        int tam = sizeof(vagoes)/sizeof(vagoes[0]);
        while(issorted(vagoes, tam) == 0){
            s+= sort(vagoes, tam);
        }
        printf("Optimal train swapping takes %i swaps.\n", s);
        casos--;
    }
    return 0;
}