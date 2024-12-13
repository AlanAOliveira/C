#include <stdio.h>

int categoria(int posic){
    int i=0, cat[7] = {1, 3, 5, 10, 25, 50,100};
    
    while(i<8){
        if(posic <= cat[i])
            return cat[i];
        i++;
    }
    return 0;
}

int main()
{
    int posic;
    scanf("%i", &posic);
    printf("Top %i\n", categoria(posic));
}