#include <stdio.h>

int main()
{   
    int i,n,p=0;
    for(i=0;i<5;i++){
        scanf("%i", &n);
        p+= n%2 == 0?1:0;
    }
    printf("%i valores pares\n",p);
    return 0;
}