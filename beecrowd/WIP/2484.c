#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,w;
    char palavra[101];
    while(scanf("%s", palavra) == 1 ){
        w = strlen(palavra);
        for(i=0;i<w;i++){
            for(j=0;j<i;j++)
                printf(" ");
            for(j=0;j<w-i-1;j++)
                printf("%c ",palavra[j]);
            printf("%c\n",palavra[w-1]);
        }
        printf("\n");
    }

    return 0;
}