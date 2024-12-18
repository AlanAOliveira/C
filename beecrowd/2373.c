#include <stdio.h>

int main()
{   
    int i,n,l,c,t=0;
    
    scanf("%i", &n);
    for(i=0;i<n;i++){
        scanf("%i %i", &l, &c);
        t += l>c?c:0;
    }
    printf("%i\n",t);
    return 0;
}