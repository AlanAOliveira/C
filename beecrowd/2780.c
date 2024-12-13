#include <stdio.h>
int main()
{
    int d;
    scanf("%i", &d);
    printf("%i\n", d<=800?1:d<=1400?2:3);
    return 0;
}