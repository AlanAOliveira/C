#include <stdio.h>
#include <string.h>
int main()
{
    int casos;
    char caso[20];
    scanf("%i", &casos);
    casos *=2;
    while(casos>0){
        scanf("%s", caso);
        if(casos % 2 == 0)
            printf(strcmp(caso,"Thor") == 0 ? "Y\n" : "N\n");
        casos--;
    }
    
    return 0;
}