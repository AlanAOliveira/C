#include <stdio.h>

int main()
{
    int i, total, bleh = 0;
    scanf("%i ", &total);
    char pamonha[total * 2];
    scanf("%[^/n]s", pamonha);
    
    for(i = 0; i < 2000; i++){
        if(pamonha[i] == '1')
            bleh++;
        else if(pamonha[i] == '\n')
            i = 2001;
    }
    printf("%i\n", bleh);
    
        
    
    return 0;
}