#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,q,n,blkspc,lstpoint = 0;
	char inp[150];

	scanf("%i", &n);

	for(i=0; i<n; i++) {
		scanf("%i", &q);
		int vags[q];
		scanf(" %[^\n]s", &inp);
		strcat(inp, " ");
		//printf("%s\n", inp);
		for(j=0;j<strlen(inp);j++){
		    if(inp[j] == ' ')
		    vags[j-1] = inp[j-1]-48;
		}
		for(j=0;j<q;j++)
		    printf("[%i]", vags[j]);
		    

	}


	return 0;
}