#include <stdio.h>

int main()
{
    int len = 7, k =0;
    
    int num[7] = {1,1,1,0,5,6,1}, i,j;


    for(i=0; i<len;i++)
        for(j=0; j<len;j++)
            if(num[i] == num[j] && i!=j){
                num[j] = num[(len - 1)];
                len--;
                k++;
                printf("%i repeticoes\n", k);
                printf("%i = %i  e %i != %i\n", num[i], num[j],i,j);
            }
            
                
    for(i=0; i<len;i++)
        printf("[%i]", num[i]);
    return 0;
}