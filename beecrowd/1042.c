#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <search.h>

int cmp(int * num1, int * num2){
    return (*num1 == *num2) ? 0 : (*num1 < *num2) ? -1 : 1;
}
int main()
{
    int i,x[3],y[3];
    scanf("%i %i %i", &x[0], &x[1], &x[2]);
    y[0] = x[0];
    y[1] = x[1];
    y[2] = x[2];
    qsort(x,3,sizeof(int),cmp);
    for(i=0;i<3;i++)
        printf("%i\n",x[i]);
    printf("\n");
    for(i=0;i<3;i++)
        printf("%i\n",y[i]);
    return 0;
}