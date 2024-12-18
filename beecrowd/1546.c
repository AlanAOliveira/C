#include <stdio.h>


void responsavel(int cat){
    
    switch(cat){
        case 1:
            printf("Rolien\n");
            break;
        case 2:
            printf("Naej\n");
            break;
        case 3:
            printf("Elehcim\n");
            break;
        case 4:
            printf("Odranoel\n");
            break;
    }
        
}


int main()
{   
    int n,k,d;
    scanf("%i", &n);
    while(n>0){
        scanf("%i", &k);
        while(k>0){
            scanf("%i", &d);
            responsavel(d);
            k--;
        }
        n--;
    }
    return 0;
}




