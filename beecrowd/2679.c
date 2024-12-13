#include <stdio.h>
int main()
{
    int num;
    scanf("%i", &num);
    printf("%i\n", num % 2 == 0 ? num + 2 : num + 1);
    return 0;
}