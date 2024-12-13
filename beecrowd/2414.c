#include <stdio.h>
int main()
{
    int num = 1, max=0;
    
    while(num>0){
        scanf("%i", &num);
        max = num>max?num:max;
    }
    printf("%i\n", max);
    return 0;
}