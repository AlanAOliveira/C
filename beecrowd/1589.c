#include <stdio.h>

int main()
{
	int casos, r1,r2;
	scanf("%i", &casos);
	while(casos>0){
	    scanf("%i %i", &r1,&r2);
	    printf("%i\n", r1+r2);
	    casos--;
	}
}