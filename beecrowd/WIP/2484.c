#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,w;
    char palavra[101];
    scanf("%s", palavra);
    w = strlen(palavra);
    for(i=0;i<w;i++){
        for(j=0;j<w-i;j++)
            printf("%c ",palavra[j]);
        printf("\n");
    }
    return 0;
}