#include <stdio.h>

void convertera(char *raantigo){

    int i,j;
    char ranovo[14] = "003048AASTNNN";
    if(raantigo[1] == 'D')
    ranovo[9] = '1';
    if(raantigo[1] == 'N')
    ranovo[9] = '3';

    for(i=2,j=6;i<8;i++,j++){
      ranovo[j] = raantigo[i];
      if(j==8)j++;
      }

    printf("%s\n", ranovo);

}

void main(void){
    int i,lps;
    char ra[9];
    scanf("%i", &lps);
    for(i=0;i<lps;i++){
        scanf("%s", ra);
        convertera(ra);
    }
}
