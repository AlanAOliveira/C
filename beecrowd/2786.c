#include <stdio.h>
int main()
{
    int l, c;
    scanf("%i", &l);
    scanf("%i", &c);
    printf("%i\n", (l*c) + (l-1) * (c-1));
    printf("%i\n", (l+c-2)*2);

    return 0;
}