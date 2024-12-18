#include <stdio.h>

int main()
{   
    int n;
    float l;
    scanf("%i", &n);
    while(n>0){
        scanf("%f", &l);
        printf("%.0f\n", (l+1)*(l/2) + 1);
        n--;
    }
    return 0;
}