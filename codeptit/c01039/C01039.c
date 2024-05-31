#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    short int d = 0;
    while(n > 0)
    {
        n /= 10;
        d++;
    }
    printf("%d", d);
    return 0;
}
