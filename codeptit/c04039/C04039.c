#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int l, r;
    long long res = 0;
    while(scanf("%d%d", &l, &r) != -1)
    {
        int d = abs(l - r);
        int x = sqrt(d);
        int m = x * (x + 1);
        if(d == x * x)
            res = 2 * x - 1;
        else if(d > x * x && d <= m)
            res = 2 * x;
        else res = 2 * x + 1;
        printf("%d\n", res);
    }

    return 0;
}
