#include <stdio.h>
#include <string.h>
int main()
{
	char palavra1[21],palavra2[21];

	scanf("%s", palavra1);
	scanf("%s", palavra2);
    if(strcmp(palavra2, palavra1)<0)
    printf("%s\n%s\n", palavra2, palavra1);
    else
    printf("%s\n%s\n", palavra1, palavra2);
	return 0;
}