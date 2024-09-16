#include <stdio.h>
#include <string.h>


void lastandfirst( char *texto){

    char fstname[200], lstname[200];
    int lstspace,fstspace,i,k;

    for(i = strlen(texto) - 1;i>=0;i--)
        if(texto[i] == ' '){
            lstspace = i+1;
            break;
        }
    k = strlen(texto) - lstspace;
    for(i=0;i < k;i++)
        lstname[i] = texto[i+lstspace];
    lstname[i] = '\0';

    for(i=0; i < strlen(texto);i++)
        if(texto[i] == ' '){
            fstspace = i;
            break;
        }

    for(i=0;i<fstspace;i++)
        fstname[i] = texto[i];
    fstname[i] = '\0';

    printf("%s %s\n", lstname, fstname);

}



void main(){
    char fullname[200];
    scanf("%[^\n]s", fullname);
    lastandfirst(fullname);
}
