#include <stdio.h>
#include <string.h>

int rodizio(char * placa){
    int i,k,r;
    if(strlen(placa)!=8)
        return 0;
    if(placa[3] != '-')
        return 0;    
    for(i=0;i<3;i++)
        if(placa[i]<65 || placa[i]>90)
            return 0;
    for(i=4;i<8;i++)
        if(placa[i]<48 || placa[i]>57)
            return 0;
    
    k = (placa[7] - 48)/2 + (placa[7] - 48)%2;
    r = (!(placa[7] - 48)) ? 5 : k;
    return r;
}

int main()
{
    int casos,i;
    char placa[21], * PA = placa,
    dias[6][10] = {"FAILURE","MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"};
    scanf("%i", &casos);
    for(i=0;i<casos;i++){
        scanf("%s", PA);
        printf("%s\n",dias[rodizio(PA)]);
    }
    return 0;
}