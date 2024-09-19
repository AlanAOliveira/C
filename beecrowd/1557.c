#include <stdio.h>
#include <math.h>
 
 
int geramatriz(int num){
    int i,j,d = 10, f = 1;
    char format[4] = "%1i";
    while(pow(2,(num - 1) + (num-1)) > d){
        f++;
        format[1] = f+48;
        d = d * 10;
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            int x = pow(2,i+j);
            printf(format, x);
            if(j < num - 1)
            printf(" ");
        }
        printf("\n");   
    }
    printf("\n");
    return 0;
}
 
int main(){
    int a,t;
    scanf("%i", &a);
    while(a !=0 ){
        t = pow(2, a+1);
        geramatriz(a);
        scanf("%i", &a);
    }
 
    return 0;
}