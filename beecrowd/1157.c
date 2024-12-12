#include <stdio.h>

int main()
{
	int num,i,x;
	scanf("%i", &num);
	i = num;
	if(num==0)
	    printf("0\n");
	    
	while(i>0){
	    x = num%i;
	    if(x ==0)
	    printf("%i\n",num/i);
	    i--;
	}
}