#include <stdio.h>
int main()
{
    int casos, num;
    scanf("%i", &casos);
    while(casos>0){
        scanf("%i", &num);
        printf("%i\n", num % 2 == 0 ? 0 : 1);
        casos--;
    }
    return 0;
}