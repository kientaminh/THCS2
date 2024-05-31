#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u0, d, n;
    scanf("%d%d%d", &u0, &d, &n);
    int un = u0 + (n - 1) * d;
    printf("%d", (u0 + un) * n / 2);
    return 0;
}
