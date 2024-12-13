#include <stdio.h>
int main()
{
    int casos, p, total=0;
    scanf("%i", &casos);
    
    while(casos>0){
        scanf("%i", &p);
        if(p>1)
            total++;
        casos--;
    }
    printf("%i\n", total);
    
    return 0;
}