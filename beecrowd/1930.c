#include <stdio.h>

int main()
{
    int t[5];
    scanf("%i %i %i %i", &t[0],&t[1],&t[2],&t[3]);
    t[4] = t[0] + t[1] + t[2] + t[3] - 3;
    printf("%i\n",t[4]);
    return 0;
}