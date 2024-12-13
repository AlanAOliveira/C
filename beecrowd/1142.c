#include <stdio.h>
int main()
{
    int num,i,j;
    scanf("%i", &num);
    
    for(i=0;i<num *4;i+=4)
        printf("%i %i %i PUM\n", 1+i, 2+i, 3+i);
    return 0;
}