#include <stdio.h>

int main()
{
	int i,j = 0;
	float k;
	
	for(i=0;i<6;i++){
	    scanf("%f", &k);
	    j+= (k>0)?1:0;
	}
	 
	printf("%i valores positivos\n", j);
	
	return 0;
}