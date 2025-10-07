#include <stdio.h>

int main()
{
	int i,j;
	
	scanf("%i %i", &i, &j);
	while(i !=0 && j!=0){
	    printf("%i\n", i+j);
	    scanf("%i %i", &i,&j);
	}
	
	return 0;
}